complex complex::operator+(complex obj)
{
	complex temp;
	temp.real=real+obj.real;
	temp.img=img+obj.img;
	return temp;
}

complex complex::operator*(complex obj)
{
	complex temp;
	temp.real=real*obj.real-img*obj.img;
	temp.img=img*obj.real+real*obj.img;
	return temp;
}


int main()
{
	complex a,b,c,d;
	int ch;
	cout<<"\n The first complex number is:";
	cout<<"\nEnter real and img:";
	cin>>a;

	cout<<"\n The second complex number is:";
	cout<<"\nEnter real and img:";
	cin>>b;

	do
	{
	
	cout<<"Enter Your Choice\n1.Adition\n2.Multiplication\n3.Exit\n";
	cin>>ch;
	switch(ch)
	{
	case 1:
	c=a+b;
	cout<<"\n Addition=";
	cout<<c<<endl;
	break;
	
	case 2:
	d=a*b;
	cout<<"\n Multiplication=";
	cout<<d<<endl;
	break;
	}
	}
	while(ch!=3);

	return 0;
}