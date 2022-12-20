#include <iostream>
using namespace std;
float f(float y)
{   float fdy;
    fdy=((y*y)* cos(y))+1;
    return fdy;
}

float med(float s, float t)
{
    float meed=0;
    meed=(s+t)/2;
    return meed;
}

float bi(float a, float b)
{   float err;
    float x;

   do {
        if ((f(a)*f(b)<0))
        {
            med(a,b);
            if ((f(a)*f(med(a,b)))<0)
            {
                b=med(a,b);
            }
            if ((f(med(a,b))*f(b))<0)
            {
                a=med(a,b);
            }

        }
        err= abs((b-a)/2);

    }
    while (err>=0.000001 && med(a,b)!=0);

    if (f(med(a,b))==0 or err<=0.000001)
    {
        return med(a,b);
    }
}

int main() {
   
  
   float n=0, m=0, x=0;
        cout << "inserire estremi : " << endl;
        cin >> n;
        cin >> m;
   if (f(n)*f(m)<0)
   {
       bi(n,m);
   }
    cout<<"x: "<< ceil( bi(n,m)* 1000) / 1000<<endl<<"f(x): "<<ceil( f(bi(n,m))* 1000) / 1000<<endl;
    return 0;
}



   return 0;
}
