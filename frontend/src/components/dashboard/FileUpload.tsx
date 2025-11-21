import { Card, CardContent, CardHeader, CardTitle } from "@/components/ui/card";
import { Button } from "@/components/ui/button";
import { Upload, FileText, CheckCircle, X } from "lucide-react";
import { useState } from "react";
import { toast } from "sonner";

interface FileUploadProps {
  kmlData: string | null;
  setKmlData: (data: string | null) => void;
}

export const FileUpload = ({ kmlData, setKmlData }: FileUploadProps) => {
  const [selectedFile, setSelectedFile] = useState<File | null>(null);

  const handleFileChange = (e: React.ChangeEvent<HTMLInputElement>) => {
    const file = e.target.files?.[0];
    if (file) {
      setSelectedFile(file);
      toast.success(`File selected: ${file.name}`);
    }
  };

  const handleUpload = () => {
    if (!selectedFile) {
      toast.error("Please select a file first");
      return;
    }

    if (selectedFile.name.toLowerCase().endsWith(".kml")) {
      const reader = new FileReader();
      reader.onload = (e) => {
        const kmlContent = e.target?.result as string;
        setKmlData(kmlContent);
        toast.success("KML file uploaded successfully!");
      };
      reader.readAsText(selectedFile);
    } else {
      toast.success("File uploaded successfully!");
    }
  };

  const handleClearKML = () => {
    setKmlData(null);
    setSelectedFile(null);
    toast.success("KML cleared from map");
  };

  return (
    <Card>
      <CardHeader className="border-b border-border pb-2">
        <CardTitle className="flex items-center gap-2">
          <Upload className="h-4 w-4 text-primary" />
          <span className="text-sm">File Upload</span>
        </CardTitle>
      </CardHeader>
      <CardContent className="space-y-2 pt-3">
        <div className="border border-dashed border-border rounded p-3 text-center space-y-2 hover:border-primary transition-colors cursor-pointer">
          <Upload className="h-5 w-5 mx-auto text-muted-foreground" />
          <div>
            <label htmlFor="file-upload" className="cursor-pointer text-xs">
              <span className="text-primary hover:underline">Click to upload</span>
              <span className="text-muted-foreground"> or drag</span>
            </label>
            <input
              id="file-upload"
              type="file"
              className="hidden"
              onChange={handleFileChange}
              accept=".json,.csv,.txt,.kml"
            />
          </div>
          <p className="text-xs text-muted-foreground leading-tight">
            JSON, CSV, TXT, KML
          </p>
        </div>

        {selectedFile && (
          <div className="flex items-center gap-2 p-2 rounded bg-secondary/50">
            <FileText className="h-4 w-4 text-primary flex-shrink-0" />
            <span className="text-xs flex-1 truncate">{selectedFile.name}</span>
            <CheckCircle className="h-4 w-4 text-status-success flex-shrink-0" />
          </div>
        )}

        <Button 
          className="w-full text-xs h-8" 
          onClick={handleUpload}
          disabled={!selectedFile}
        >
          Upload File
        </Button>

        {kmlData && (
          <Button
            variant="outline"
            className="w-full text-xs h-8"
            onClick={handleClearKML}
          >
            <X className="h-3 w-3 mr-1" />
            Clear KML
          </Button>
        )}
      </CardContent>
    </Card>
  );
};
