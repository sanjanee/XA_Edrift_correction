
 void DriftCorrectionCheck() 
 {


   TCanvas *c1 = new TCanvas("c1","multipads",1500,1500);
   gStyle->SetOptStat(0);
   gStyle->SetPalette(55);
   c1->Divide(2,2,0,0);
   c1->SetLogz();
   
    TFile *f2d= new TFile("runexp082.root");         // Histo ROOT file
 
// Get pointer to the histos
    TH2F *e1 = (TH2F*)f2d->FindObjectAny("EhiClo1"); 
    TH2F *e2 = (TH2F*)f2d->FindObjectAny("EhiClo2");
    TH2F *e3 = (TH2F*)f2d->FindObjectAny("EhiClo3");
    TH2F *e = (TH2F*)f2d->FindObjectAny("EhiClo");
    


   c1->cd(1);
   //gPad->SetTickx(2);
   TPad* pad1 = (TPad*)c1->GetPad(1);
pad1->SetLeftMargin(0.15);
pad1->SetBottomMargin(0.12);
pad1->SetTopMargin(0.04);
pad1->SetRightMargin(0.02);
pad1->SetFillColor(0);
pad1->SetBorderMode(1);
   gPad->SetLogz();
   gPad->SetBorderMode(1);
    e1->GetXaxis()->SetTitle("ch No");
   e1->GetXaxis()->SetRangeUser(0,2000);
   e1->Draw("colz");

   c1->cd(2);
   TPad* pad2 = (TPad*)c1->GetPad(2);
pad2->SetLeftMargin(0.15);
pad2->SetBottomMargin(0.12);
pad2->SetTopMargin(0.04);
pad2->SetRightMargin(0.02);
pad2->SetFillColor(0);
pad2->SetBorderMode(1);
   //gPad->SetTickx(2);
   gPad->SetLogz();
   e2->GetXaxis()->SetTitle("ch No");
   //e2->GetXaxis()->SetLabelOffset(0.01);
   e2->GetXaxis()->SetRangeUser(1650,1750);
  e2->Draw("colz");
   
   c1->cd(3);
   TPad* pad3 = (TPad*)c1->GetPad(3);
pad3->SetLeftMargin(0.15);
pad3->SetBottomMargin(0.12);
pad3->SetTopMargin(0.04);
pad3->SetRightMargin(0.02);
pad3->SetFillColor(0);
pad3->SetBorderMode(1);
   gPad->SetLogz();
   e3->GetXaxis()->SetTitle("ch No");
   e3->GetXaxis()->SetRangeUser(1650,1750);
   e3->Draw("colz");

   c1->cd(4);
   TPad* pad4 = (TPad*)c1->GetPad(4);
pad4->SetLeftMargin(0.15);
pad4->SetBottomMargin(0.12);
pad4->SetTopMargin(0.04);
pad4->SetRightMargin(0.02);
pad4->SetFillColor(0);
pad4->SetBorderMode(1);
   gPad->SetLogz();
   //gPad->SetTicky(2);
    e->GetXaxis()->SetTitle("keV");
   e->GetXaxis()->SetRangeUser(1000,1100);
   e->Draw("colz"); 
   

   }
