#ifndef DVECTOR_H 
#define DVECTOR_H

//! Implementation of vector ADT, 
/*
  implementation of vectore ADT based on the dynamic resizable array, 
*/

class DVector
{
   public: 
   
   //! Default constructor 
   DVector(); 
   

   private: 
       
       int* ptr-arr; /*! dynamic arr */
       int cpct; /*< capcacity */ 
       int numb; /*< number of el */
       
       //Duplicate vectore
       void copy(const DVector &vct);
         
        
   
      
}; 
