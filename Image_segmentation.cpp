//---------------pixeles counter--------------------------//

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
//----------------lid 1--------------------//
//-------------------------bottle 1----------------------------------------//
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
//-------------------------bottle 1----------------------------------------//



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
//----------------lid 2--------------------//
//------------------------------bottle 2----------------------------------------//

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
//--------------------------------bottle 2----------------------------------------//-------------------------------//



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
//----------------lid 3--------------------//
//--------------------------bottle 3-----------------------------------------//
for (int i = 1023; i <= 1135; i++)
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

//--------------------------bottle 3-----------------------------------------//-----------------------------------------//

blancos4 = 0;
blancos5 = 0;
blancos6 = 0;
tapa4 = 0;
tapa5 = 0;
tapa6 = 0;
bot4 = 0;
bot5 = 0;
bot6 = 0;
            
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
//----------------lid 4--------------------//
//------------------------bottle 4------------------------------------------//
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
//-------------------------- bottle 4-----------------------------------------//



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
//----------------lid 5--------------------//
//----------------------------bottle 5----------------------------------------//
for (int i = 520; i <= 707; i++)
{
    for (int j = 515; j <= 840; j++)
    {
        int d = c.GetPixel(i, j).ToArgb();
        if (d.Equals(-1))
        {
            blancos5 = blancos5 + 1;
            c.SetPixel(i, j, cambio);
        }
    }
}
//---------------------------bottle 5 ----------------------------------------//



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
//----------------lid 6--------------------//

//---------------------------bottle 6---------------------------------------//
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
//---------------------------bottle 6 ----------------------------------------//
