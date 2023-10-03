package main

import (
	"fmt"
)

type ReportGenerator interface {
	GenerateReport(data string) string
}

type PDFReportGenerator struct{}

func (prg *PDFReportGenerator) GenerateReport(data string) string {
	return fmt.Sprintf("Generating PDF report with data: %s", data)
}

type HTMLReportGenerator struct{}

func (hrg *HTMLReportGenerator) GenerateReport(data string) string {
	return fmt.Sprintf("Generating HTML report with data: %s", data)
}

type ReportFactory struct{}

func (rf *ReportFactory) CreateReportGenerator(reportType string) ReportGenerator {
	switch reportType {
	case "pdf":
		return &PDFReportGenerator{}
	case "html":
		return &HTMLReportGenerator{}
	default:
		return nil
	}
}

func main() {
	defer fmt.Println("Works fine :D")

	factory := &ReportFactory{}

	pdfGenerator := factory.CreateReportGenerator("pdf")
	pdfReport := pdfGenerator.GenerateReport("Some PDF Data!")
	fmt.Println(pdfReport)

	htmlGenerator := factory.CreateReportGenerator("html")
	htmlReport := htmlGenerator.GenerateReport("Some HTML Data!")
	fmt.Println(htmlReport)
}
