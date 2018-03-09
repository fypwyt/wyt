// This file was generated based on C:/Users/Brian/AppData/Local/Fusetools/Packages/UnoCore/1.6.0/Source/Uno/Runtime/Implementation/Internal/NumericFormatter.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.h>
namespace g{namespace Uno{namespace Runtime{namespace Implementation{namespace Internal{struct NumericFormatter;}}}}}

namespace g{
namespace Uno{
namespace Runtime{
namespace Implementation{
namespace Internal{

// public static class NumericFormatter :18
// {
uClassType* NumericFormatter_typeof();
void NumericFormatter__CalculateExponential_fn(double* d, double* significand, int32_t* exponent);
void NumericFormatter__get_DecimalPoint_fn(uString** __retval);
void NumericFormatter__Digits_fn(uString* formatString, int32_t* __retval);
void NumericFormatter__DoFormatHex_fn(uString* formatString, uint64_t* l, int32_t* maxLength, uString** __retval);
void NumericFormatter__Format_fn(uString* formatString, bool* i, uString** __retval);
void NumericFormatter__Format1_fn(uString* formatString, double* d, uString** __retval);
void NumericFormatter__Format2_fn(uString* formatString, float* f, uString** __retval);
void NumericFormatter__Format3_fn(uString* formatString, int32_t* i, uString** __retval);
void NumericFormatter__Format4_fn(uString* formatString, int64_t* i, uString** __retval);
void NumericFormatter__Format5_fn(uString* formatString, int8_t* b, uString** __retval);
void NumericFormatter__Format6_fn(uString* formatString, int16_t* s, uString** __retval);
void NumericFormatter__Format7_fn(uString* formatString, uint64_t* i, uString** __retval);
void NumericFormatter__FormatCustom_fn(uString* formatString, double* value, uString** __retval);
void NumericFormatter__FormatCustom1_fn(uString* formatString, uint64_t* value, uString** __retval);
void NumericFormatter__FormatCustomDoublePart_fn(uString* doubleFormat, double* d, bool* decimalPoint, uString** __retval);
void NumericFormatter__FormatCustomIntegerPart_fn(uString* integerFormat, uint64_t* value, uString** __retval);
void NumericFormatter__FormatDecimal_fn(uString* formatString, uint64_t* l, uString** __retval);
void NumericFormatter__FormatExponential_fn(uString* formatString, double* d, uString** __retval);
void NumericFormatter__FormatFixedPoint_fn(uString* formatString, double* d, uString** __retval);
void NumericFormatter__FormatFixedPoint1_fn(uString* formatString, uint64_t* d, uString** __retval);
void NumericFormatter__FormatFloatGeneral_fn(uString* formatString, float* f, uString** __retval);
void NumericFormatter__FormatGeneral_fn(uString* formatString, double* d, uString** __retval);
void NumericFormatter__FormatGeneral1_fn(uString* formatString, uint64_t* i, uString** __retval);
void NumericFormatter__FormatHex_fn(uString* formatString, int32_t* i, uString** __retval);
void NumericFormatter__FormatHex1_fn(uString* formatString, int64_t* l, uString** __retval);
void NumericFormatter__FormatHex2_fn(uString* formatString, int8_t* b, uString** __retval);
void NumericFormatter__FormatHex3_fn(uString* formatString, int16_t* s, uString** __retval);
void NumericFormatter__FormatHex4_fn(uString* formatString, uint64_t* l, uString** __retval);
void NumericFormatter__FormatNumber_fn(double* d, uString** __retval);
void NumericFormatter__FormatNumber1_fn(uString* formatString, double* d, uString** __retval);
void NumericFormatter__FormatNumber2_fn(uString* formatString, uint64_t* i, uString** __retval);
void NumericFormatter__FormatNumber3_fn(uint64_t* i, uString** __retval);
void NumericFormatter__GetFormatSpecifier_fn(uString* formatString, int32_t* __retval);
void NumericFormatter__GetStandartFormat_fn(char16_t* symbol, int32_t* __retval);
void NumericFormatter__IsLetter_fn(char16_t* symbol, bool* __retval);
void NumericFormatter__Pad_fn(uString* unmodified, uString* formatString, uString** __retval);
void NumericFormatter__Padding_fn(int32_t* length, uString** __retval);

struct NumericFormatter : uObject
{
    static int32_t NumberDecimalDigits_;
    static int32_t& NumberDecimalDigits() { return NumericFormatter_typeof()->Init(), NumberDecimalDigits_; }
    static int32_t ExponentialDigits_;
    static int32_t& ExponentialDigits() { return NumericFormatter_typeof()->Init(), ExponentialDigits_; }
    static uSStrong<uString*> _decimalPoint_;
    static uSStrong<uString*>& _decimalPoint() { return NumericFormatter_typeof()->Init(), _decimalPoint_; }

    static void CalculateExponential(double d, double* significand, int32_t* exponent);
    static int32_t Digits(uString* formatString);
    static uString* DoFormatHex(uString* formatString, uint64_t l, int32_t maxLength);
    static uString* Format(uString* formatString, bool i);
    static uString* Format1(uString* formatString, double d);
    static uString* Format2(uString* formatString, float f);
    static uString* Format3(uString* formatString, int32_t i);
    static uString* Format4(uString* formatString, int64_t i);
    static uString* Format5(uString* formatString, int8_t b);
    static uString* Format6(uString* formatString, int16_t s);
    static uString* Format7(uString* formatString, uint64_t i);
    static uString* FormatCustom(uString* formatString, double value);
    static uString* FormatCustom1(uString* formatString, uint64_t value);
    static uString* FormatCustomDoublePart(uString* doubleFormat, double d, bool* decimalPoint);
    static uString* FormatCustomIntegerPart(uString* integerFormat, uint64_t value);
    static uString* FormatDecimal(uString* formatString, uint64_t l);
    static uString* FormatExponential(uString* formatString, double d);
    static uString* FormatFixedPoint(uString* formatString, double d);
    static uString* FormatFixedPoint1(uString* formatString, uint64_t d);
    static uString* FormatFloatGeneral(uString* formatString, float f);
    static uString* FormatGeneral(uString* formatString, double d);
    static uString* FormatGeneral1(uString* formatString, uint64_t i);
    static uString* FormatHex(uString* formatString, int32_t i);
    static uString* FormatHex1(uString* formatString, int64_t l);
    static uString* FormatHex2(uString* formatString, int8_t b);
    static uString* FormatHex3(uString* formatString, int16_t s);
    static uString* FormatHex4(uString* formatString, uint64_t l);
    static uString* FormatNumber(double d);
    static uString* FormatNumber1(uString* formatString, double d);
    static uString* FormatNumber2(uString* formatString, uint64_t i);
    static uString* FormatNumber3(uint64_t i);
    static int32_t GetFormatSpecifier(uString* formatString);
    static int32_t GetStandartFormat(char16_t symbol);
    static bool IsLetter(char16_t symbol);
    static uString* Pad(uString* unmodified, uString* formatString);
    static uString* Padding(int32_t length);
    static uString* DecimalPoint();
};
// }

}}}}} // ::g::Uno::Runtime::Implementation::Internal
