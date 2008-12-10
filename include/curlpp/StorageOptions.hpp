/*
 *    Copyright (c) <2002-2008> <Jean-Philippe Barrette-LaPierre>
 *    
 *    Permission is hereby granted, free of charge, to any person obtaining
 *    a copy of this software and associated documentation files 
 *    (curlpp), to deal in the Software without restriction, 
 *    including without limitation the rights to use, copy, modify, merge,
 *    publish, distribute, sublicense, and/or sell copies of the Software,
 *    and to permit persons to whom the Software is furnished to do so, 
 *    subject to the following conditions:
 *    
 *    The above copyright notice and this permission notice shall be included
 *    in all copies or substantial portions of the Software.
 *    
 *    THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS
 *    OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF
 *    MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. 
 *    IN NO EVENT SHALL THE AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY 
 *    CLAIM, DAMAGES OR OTHER LIABILITY, WHETHER IN AN ACTION OF CONTRACT, 
 *    TORT OR OTHERWISE, ARISING FROM, OUT OF OR IN CONNECTION WITH THE
 *    SOFTWARE OR THE USE OR OTHER DEALINGS IN THE SOFTWARE.
 */

#ifndef CURLPP_STORAGE_OPTIONS_HPP
#define CURLPP_STORAGE_OPTIONS_HPP

#include "buildconfig.h"
#include "Option.hpp"
#include "TypeTrait.hpp"


namespace curlpp 
{

  namespace options 
  {
    
	template< typename CallbackType, 
	      typename DataType, 
	      CURLoption CallbackOptionValue,
	      CURLoption DataOptionValue >
    class CURLPPAPI StorageOption :  public curlpp::OptionList
    {
    public:
      void setCallback(CallbackType callback);
      void setData(typename Utilspp::TypeTrait<DataType>::ParamType data);
    };

  } // namespace options

	namespace Options = options;

} // namespace curlpp

#ifdef CURLPP_INCLUDE_TEMPLATE_DEFINITIONS
	#include "StorageOptions.inl"
#endif

namespace cURLpp = curlpp;

#endif // #ifndef CURLPP_STORAGE_OPTIONS_HPP
