//This script plots energy vs time stap histogram for 6 drifting crystals (7, 9,12,16,17,19) in XA on one canvas.
//On the same histograms it plots the centroid/mean of the peak
////////////////////////////////////////////////////////////////////////////////////////////////// 
 void CheckSpline() 
 {
   TCanvas *c1 = new TCanvas("c1","Drifting Crystals",1500,1500);
   gStyle->SetOptStat(0);
  // gStyle->SetPalette(55);
   c1->Divide(2,3,0,0);
   c1->SetLogz();
 Char_t histoName[100];
Char_t graphName[100];
TFile *f2d= new TFile("drift082nov17.root");         // Histo ROOT file genarated from AnalyzeDrift.c   
 //for(Int_t i=82; i<=82; i++)
//{ 
//TFile *f2d= new TFile("drift082nov17.root"); // Input data file

/////////////////////// Get pointers to the histos/////////////

//sprintf(histoName,"hEhiDrift_07_r%03i", i); 
//cout <<"histoName = "<< histoName <<endl;
//TH2F *e7 = (TH2F*)f2d->FindObjectAny("histoName");
TH2F *e7 = (TH2F*)f2d->FindObjectAny("hEhiDrift_07_r082"); 
// sprintf(histoName,"hEhiDrift_09_r%03i", i);
TH2F *e9 = (TH2F*)f2d->FindObjectAny("hEhiDrift_09_r082");
// sprintf(histoName,"hEhiDrift_12_r%03i", i);
TH2F *e12 = (TH2F*)f2d->FindObjectAny("hEhiDrift_12_r082");
//sprintf(histoName,"hEhiDrift_16_r%03i", i);
TH2F *e16 = (TH2F*)f2d->FindObjectAny("hEhiDrift_16_r082");
// sprintf(histoName,"hEhiDrift_17_r%03i", i);
TH2F *e17 = (TH2F*)f2d->FindObjectAny("hEhiDrift_17_r082");
//sprintf(histoName,"hEhiDrift_19_r%03i", i);
TH2F *e19 = (TH2F*)f2d->FindObjectAny("hEhiDrift_19_r082");
    
////////////// Get pointers to the graphs///////////////////////

// sprintf(graphName,"g_driftGCent2_07_r%03i",i);
// TGraph *g7 = (TGraph*)f2d->FindObjectAny("graphName"); 
TGraph *g7 = (TGraph*)f2d->FindObjectAny("g_driftGCent2_07_r082"); 
//sprintf(graphName,"g_driftGCent2_09_r%03i",i);
TGraph *g9 = (TGraph*)f2d->FindObjectAny("g_driftGCent2_09_r082"); 
//sprintf(graphName,"g_driftGCent2_12_r%03i",i);
TGraph *g12 = (TGraph*)f2d->FindObjectAny("g_driftGCent2_12_r082"); 
//sprintf(graphName,"g_driftGCent2_16_r%03i",i);
TGraph *g16 = (TGraph*)f2d->FindObjectAny("g_driftGCent2_16_r082"); 
//sprintf(graphName,"g_driftGCent2_17_r%03i",i);
TGraph *g17 = (TGraph*)f2d->FindObjectAny("g_driftGCent2_17_r082"); 
//sprintf(graphName,"g_driftGCent2_19_r%03i",i);
TGraph *g19 = (TGraph*)f2d->FindObjectAny("g_driftGCent2_19_r082"); 

 //////////////Draw the histos & graphs////////////////////////////
 
c1->cd(1);
TPad* pad1 = (TPad*)c1->GetPad(1);
pad1->SetLeftMargin(0.15);
pad1->SetBottomMargin(0.12);
pad1->SetTopMargin(0.04);
pad1->SetRightMargin(0.02);
pad1->SetFillColor(0);
pad1->SetBorderMode(1);
gPad->SetLogz();
gPad->SetBorderMode(1);
e7->GetYaxis()->SetTitle("Energy (ch no)");
e7->GetXaxis()->SetTitle("time stamp");
e7->GetYaxis()->SetRangeUser(1650,1750);
e7->GetXaxis()->SetRangeUser(0,4000);
e7->Draw("colz");
g7->Draw("same *");

c1->cd(2);
TPad* pad2 = (TPad*)c1->GetPad(2);
pad2->SetLeftMargin(0.15);
pad2->SetBottomMargin(0.12);
pad2->SetTopMargin(0.04);
pad2->SetRightMargin(0.02);
pad2->SetFillColor(0);
pad2->SetBorderMode(1);
gPad->SetLogz();
e9->GetXaxis()->SetTitle("time stamp");
e9->GetYaxis()->SetRangeUser(1650,1750);
e9->GetXaxis()->SetRangeUser(0,4000);
e9->Draw("colz");
g9->Draw("same *");
   
c1->cd(3);
TPad* pad3 = (TPad*)c1->GetPad(3);
pad3->SetLeftMargin(0.15);
pad3->SetBottomMargin(0.12);
pad3->SetTopMargin(0.04);
pad3->SetRightMargin(0.02);
pad3->SetFillColor(0);
pad3->SetBorderMode(1);
gPad->SetLogz();
e12->GetXaxis()->SetTitle("time stamp");
e12->GetXaxis()->SetRangeUser(0,4000);
e12->GetYaxis()->SetRangeUser(1650,1750);
e12->Draw("colz");
g12->Draw("same *");

 c1->cd(4);
TPad* pad4 = (TPad*)c1->GetPad(4);
pad4->SetLeftMargin(0.15);
pad4->SetBottomMargin(0.12);
pad4->SetTopMargin(0.04);
pad4->SetRightMargin(0.02);
pad4->SetFillColor(0);
pad4->SetBorderMode(1);
gPad->SetLogz();
e16->GetXaxis()->SetTitle("time stamp");
e16->GetYaxis()->SetRangeUser(1650,1750);
e16->GetXaxis()->SetRangeUser(0,4000);
e16->Draw("colz"); 
g16->Draw("same *");
   
c1->cd(5);
TPad* pad5 = (TPad*)c1->GetPad(5);
pad5->SetLeftMargin(0.15);
pad5->SetBottomMargin(0.12);
pad5->SetTopMargin(0.04);
pad5->SetRightMargin(0.02);
pad5->SetFillColor(0);
pad5->SetBorderMode(1);
gPad->SetLogz();
e17->GetXaxis()->SetTitle("time stamp");
e17->GetYaxis()->SetRangeUser(1650,1750);
e17->GetXaxis()->SetRangeUser(0,4000);
e17->Draw("colz");
g17->Draw("same *");

c1->cd(6);
TPad* pad6 = (TPad*)c1->GetPad(6);
pad6->SetLeftMargin(0.15);
pad6->SetBottomMargin(0.12);
pad6->SetTopMargin(0.04);
pad6->SetRightMargin(0.02);
pad6->SetFillColor(0);
pad6->SetBorderMode(1);
gPad->SetLogz();
e19->GetXaxis()->SetTitle("time stamp");
e19->GetYaxis()->SetRangeUser(1650,1750);
e19->GetXaxis()->SetRangeUser(0,4000);
e19->Draw("colz"); 
g19->Draw("same *");
   }
// }
