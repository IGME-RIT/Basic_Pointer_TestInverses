/*
TestInverses
(c) 2016
original authors: David I. Schwartz
Written under the supervision of David I. Schwartz, Ph.D., and
supported by a professional development seed grant from the B. Thomas
Golisano College of Computing & Information Sciences
(https://www.rit.edu/gccis) at the Rochester Institute of Technology.
This program is free software: you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation, either version 3 of the License, or (at
your option) any later version.
This program is distributed in the hope that it will be useful, but
WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
General Public License for more details.
You should have received a copy of the GNU General Public License
along with this program.  If not, see <http://www.gnu.org/licenses/>.

*	This tutorial ilustrates the reversibility of pointer.
*/


#include <iostream>
using namespace std;

int main() {
    int i, x;
    x = 50;				// assign value 50 to x
    i = *&x;            // dereference the address of x, which "cancel" each other out --> they're INVERSE operations
						// int* tmp = &x; int i = *tmp; achieves same result
	// int j = *x;		// can't do assignment because x is type int, not a pointer type
						// theoretically, you COULD try to do (int *)x as an unsafe cast, but NOT recommended

    printf("%s%i\n","p:  ",i);	// (output) p:  50
    printf("%s%i\n","p:  ",x);	// (output) p:  50 
}