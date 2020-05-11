float TH, TL, Sigma;
int MaskSize;

TH = (float)Convert.ToDouble(TxtTH.Text);               //maximium gradient
TL = (float)Convert.ToDouble(TxtTL.Text);               //minimium gradient

MaskSize = Convert.ToInt32(TxtGMask.Text);              //filter value
Sigma = (float)Convert.ToDouble(TxtSigma.Text);         //filter constant
            
CannyData = new Canny((Bitmap)pictureBox1.Image, TH, TL, MaskSize, Sigma);      //processed image selecction
pictureBox2.Image = CannyData.DisplayImage(CannyData.FilteredImage);                      //show image in the picturebox2 space
