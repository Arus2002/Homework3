#ifndef COMPLEX_NUM_H
#define COMPLEX_NUM_H
#include <iostream>

class ComplexNum {
	private:
		double mRe = 0;
		double mIm = 0;
	public:
		ComplexNum();
		ComplexNum(const double& a);
		ComplexNum(const double& a , const double& b);
		double getModuls();


		double getRe();


		double getIm();

		ComplexNum operator+ (const ComplexNum& other)
		{
			float result_real = mRe + other.mRe;
			float result_img = mIm + other.mIm;

			return ComplexNum(result_real, result_img);
		}

		ComplexNum operator- (const ComplexNum& other)
                {
                        float result_real = mRe - other.mRe;
                        float result_img = mIm - other.mIm;

                        return ComplexNum(result_real, result_img);
                }


		ComplexNum operator* (int k)
                {
			return ComplexNum(mRe * k , mIm * k);

		}

		friend std::ostream &operator<<(std::ostream& , ComplexNum&);

};

#endif 
