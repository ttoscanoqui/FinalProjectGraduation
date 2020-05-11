//--------------------------------------bottle 1-------------------------------//
    //----------------lid 1--------------------//
    for (int i = 105; i <= 270; i++)
    {
        for (int j = 500; j <= 530; j++)
        {
            int a = b.GetPixel(i, j).ToArgb();
            if (a.Equals(-1))
            {
                tapa = tapa + 1;
                b.SetPixel(i, j, cambio1);
            }
        }
    }

    if (tapasup < tapa)
        tapasup = tapa;
    if (tapa != 0)
        if (tapainf > tapa)
        tapainf = tapa;
       //----------------lid 1--------------------//

    for (int i = 110; i <= 270; i++)
    {
        for (int j = 625; j <= 950; j++)                           
        {
            int a = b.GetPixel(i, j).ToArgb();
            if (a.Equals(-1))
            {
                blancos = blancos + 1;
                b.SetPixel(i, j, cambio);
            }
        }
    }

    if (blanossup < blancos)
        blanossup = blancos;
    if (blancos != 0)
        if (blancosinf > blancos)
        blancosinf = blancos;
    label1.Text = tapasup.ToString();
    label2.Text = tapainf.ToString();
    label3.Text = blanossup.ToString();
    label4.Text = blancosinf.ToString();



//-------------------------------bottle 1---------------------------------//

//-------------------------------bottlea 2-----------------------------------//
    //----------------lid 2--------------------//
    for (int i = 560; i <= 740; i++)
    {
        for (int j = 500; j <= 530; j++)
        {
            int a = b.GetPixel(i, j).ToArgb();
            if (a.Equals(-1))
            {
                tapa1 = tapa1 + 1;
                b.SetPixel(i, j, cambio1);
            }
        }
    }
    if (tapasup1 < tapa1)
        tapasup1 = tapa1;
    if (tapa1 != 0)
        if (tapainf1 > tapa1)
        tapainf1 = tapa1;
    //----------------lid 2--------------------//


    for (int i = 565; i <= 700; i++)
    {
        for (int j = 630; j <= 930; j++)
        {
            int a = b.GetPixel(i, j).ToArgb();
            if (a.Equals(-1))
            {
                blancos1 = blancos1 + 1;
                b.SetPixel(i, j, cambio);
            }
        }
    }


    if (blanossup1 < blancos1)
        blanossup1 = blancos1;
    if (blancos1 != 0)
        if (blancosinf1 > blancos1)
        blancosinf1 = blancos1;
    label5.Text = tapasup1.ToString();
    label6.Text = tapainf1.ToString();
    label7.Text = blanossup1.ToString();
    label8.Text = blancosinf1.ToString();
//-----------------bottle 2-------------------------------------------//

//------------------------------------bottle 3-------------------------------//
    //----------------lid 3--------------------//
    for (int i = 1008; i <= 1150; i++)
    {
        for (int j = 485; j <= 530; j++)
        {
            int a = b.GetPixel(i, j).ToArgb();
            if (a.Equals(-1))
            {
                tapa2 = tapa2 + 1;
                b.SetPixel(i, j, cambio1);
            }
        }
    }
    if (tapasup2 < tapa2)
        tapasup2 = tapa2;
    if (tapa2 != 0)
        if (tapainf2 > tapa2)
        tapainf2 = tapa2;

    //----------------lid 3--------------------//

    for (int i = 1023; i <= 1165; i++)
    {
        for (int j = 635; j <= 925; j++)
        {
            int a = b.GetPixel(i, j).ToArgb();
            if (a.Equals(-1))
            {
                blancos2 = blancos2 + 1;
                b.SetPixel(i, j, cambio);
            }
        }
    }

    if (blanossup2 < blancos2)
        blanossup2 = blancos2;
    if (blancos2 != 0)
        if (blancosinf2 > blancos2)
        blancosinf2 = blancos2;
    label9.Text = tapasup2.ToString();
    label10.Text = tapainf2.ToString();
    label11.Text = blanossup2.ToString();
    label12.Text = blancosinf2.ToString();
//------------------------------bottle 3----------------------------------//
           
//----------------------bottle 4 ---------------------------------------------//
    //----------------lid 4--------------------//
    for (int i = 110; i <= 305; i++)
    {
        for (int j = 410; j <= 440; j++)
        {
            int d = c.GetPixel(i, j).ToArgb();
            if (d.Equals(-1))
            {
                tapa4 = tapa4 + 1;
                c.SetPixel(i, j, cambio1);
            }
        }
    }
    if (tapasup4 < tapa4)
        tapasup4 = tapa4;
    if (tapa4 != 0)
        if (tapainf4 > tapa4)
        tapainf4 = tapa4;

    //----------------lid 4--------------------//


    for (int i = 130; i <= 300; i++)
    {
        for (int j = 520; j <= 840; j++)                
        {
            int d = c.GetPixel(i, j).ToArgb();
            if (d.Equals(-1))
            {
                blancos4 = blancos4 + 1;
                c.SetPixel(i, j, cambio);
            }
        }
    }

    if (blanossup4 < blancos4)
        blanossup4 = blancos4;
    if (blancos4 != 0)
        if (blancosinf4 > blancos4)
        blancosinf4 = blancos4;
    label13.Text = tapasup4.ToString();
    label14.Text = tapainf4.ToString();
    label15.Text = blanossup4.ToString();
    label16.Text = blancosinf4.ToString();


//-------------------------------bottle 4---------------------------------//


//--------------------------bottle 5-------------------------------------------//

    //----------------lid 5--------------------//
    for (int i = 540; i <= 715; i++)
    {
        for (int j = 410; j <= 445; j++)
        {
            int d = c.GetPixel(i, j).ToArgb();
            if (d.Equals(-1))
            {
                tapa5 = tapa5 + 1;
                c.SetPixel(i, j, cambio1);
            }
        }
    }
    if (tapasup5 < tapa5)
        tapasup5 = tapa5;
    if (tapa5 != 0)
        if (tapainf5 > tapa5)
        tapainf5 = tapa5;
    //----------------lid 5--------------------//

    for (int i = 520; i <= 707; i++)
    {
        for (int j = 515; j <= 840; j++)                
        {
            int d = c.GetPixel(i, j).ToArgb();
            // b.SetPixel(i, j, cambio);
            if (d.Equals(-1))
            {
                blancos5 = blancos5 + 1;
                c.SetPixel(i, j, cambio);
            }
        }
    }

    if (blanossup5 < blancos5)
        blanossup5 = blancos5;
    if (blancos5 != 0)
        if (blancosinf5 > blancos5)
        blancosinf5 = blancos5;
    label17.Text = tapasup5.ToString();
    label18.Text = tapainf5.ToString();
    label19.Text = blanossup5.ToString();
    label20.Text = blancosinf5.ToString();
//--------------------------bottle 5--------------------------------------//



//------------------------bottle 6-------------------------------------//

    //----------------lid 6--------------------//
    for (int i = 985; i <= 1150; i++)
    {
        for (int j = 410; j <= 445; j++)
        {
            int d = c.GetPixel(i, j).ToArgb();
            if (d.Equals(-1))
            {
                tapa6 = tapa6 + 1;
                c.SetPixel(i, j, cambio1);
            }
        }
    }
    if (tapasup6 < tapa6)
        tapasup6 = tapa6;
    if (tapa6 != 0)
        if (tapainf6 > tapa6)
        tapainf6 = tapa6;

    //----------------lid 6--------------------//
    for (int i = 980; i <= 1130; i++)
    {
        for (int j = 530; j <= 810; j++)                            
        {
            int d = c.GetPixel(i, j).ToArgb();
            if (d.Equals(-1))
            {
                blancos6 = blancos6 + 1;
                c.SetPixel(i, j, cambio);
            }
        }
    }

    if (blanossup6 < blancos6)
        blanossup6 = blancos6;
    if (blancos6 != 0)
        if (blancosinf6 > blancos6)
        blancosinf6 = blancos6;
    label21.Text = tapasup6.ToString();
    label22.Text = tapainf6.ToString();
    label23.Text = blanossup6.ToString();
    label24.Text = blancosinf6.ToString();
//-----------------------------bottle 6 ---------------------------------//
