{
    int units = 100;
    int mini = 0;
    int maxi = 100;


    TCanvas* ccode1 = new TCanvas("code1","Test Histogram ", 500, 600,500,800); // 500, 600... are just the display units
    code1->Divide(1,2);
    code1->cd(1); // plotting in the first segment

    TH1C* h1 = new TH1C("h1","Test Histogram ", units, mini, maxi);

    h1->Draw(); // all empty now.



    for( int i=0; i< 60; i++) {
        h1->Fill(0.1); // starts at 0th bin ends at the 1st
        h1->Fill(5.2);
        h1->Fill(8.9);// starts at the 8th bin and ends at the 9th
        h1->Fill(5.2);
        h1->Fill(-0.1); // invalid as the mini is till 0 only
        h1->Fill(120); // invalid as the maxi is till 100 only
    }
    h1->Draw();
}
