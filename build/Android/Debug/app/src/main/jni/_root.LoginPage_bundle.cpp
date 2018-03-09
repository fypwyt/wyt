// This file was generated based on 'C:/Users/Brian/Desktop/Workplace/WYT Carpooling 30-1-2018/LoginPage.unoproj'.
// WARNING: Changes might be lost if you edit this file directly.

#include <_root.LoginPage_bundle.h>
#include <Uno.IO.Bundle.h>
#include <Uno.IO.BundleFile.h>
#include <Uno.String.h>
static uString* STRINGS[10];

namespace g{

// public static generated class LoginPage_bundle :0
// {
// static LoginPage_bundle() :0
static void LoginPage_bundle__cctor__fn(uType* __type)
{
    ::g::Uno::IO::Bundle_typeof()->Init();
    LoginPage_bundle::ChangePassword90b9ab70_ = uPtr(::g::Uno::IO::Bundle::Get(::STRINGS[0/*"LoginPage"*/]))->GetFile(::STRINGS[1/*"changepassw...*/]);
    LoginPage_bundle::ChangeProfilePage3aaa4757_ = uPtr(::g::Uno::IO::Bundle::Get(::STRINGS[0/*"LoginPage"*/]))->GetFile(::STRINGS[2/*"changeprofi...*/]);
    LoginPage_bundle::CreateActivityPage6191b187_ = uPtr(::g::Uno::IO::Bundle::Get(::STRINGS[0/*"LoginPage"*/]))->GetFile(::STRINGS[3/*"createactiv...*/]);
    LoginPage_bundle::LoginPage1255ca11_ = uPtr(::g::Uno::IO::Bundle::Get(::STRINGS[0/*"LoginPage"*/]))->GetFile(::STRINGS[4/*"loginpage-b...*/]);
    LoginPage_bundle::MainPagee9645955_ = uPtr(::g::Uno::IO::Bundle::Get(::STRINGS[0/*"LoginPage"*/]))->GetFile(::STRINGS[5/*"mainpage-7f...*/]);
    LoginPage_bundle::QRCode8ea3ff9b_ = uPtr(::g::Uno::IO::Bundle::Get(::STRINGS[0/*"LoginPage"*/]))->GetFile(::STRINGS[6/*"qrcode-4cf7...*/]);
    LoginPage_bundle::RegisterPage39a45867_ = uPtr(::g::Uno::IO::Bundle::Get(::STRINGS[0/*"LoginPage"*/]))->GetFile(::STRINGS[7/*"registerpag...*/]);
    LoginPage_bundle::SettingPage4b8596d2_ = uPtr(::g::Uno::IO::Bundle::Get(::STRINGS[0/*"LoginPage"*/]))->GetFile(::STRINGS[8/*"settingpage...*/]);
    LoginPage_bundle::ViewActivityPage252a2a0e_ = uPtr(::g::Uno::IO::Bundle::Get(::STRINGS[0/*"LoginPage"*/]))->GetFile(::STRINGS[9/*"viewactivit...*/]);
}

static void LoginPage_bundle_build(uType* type)
{
    ::STRINGS[0] = uString::Const("LoginPage");
    ::STRINGS[1] = uString::Const("changepassword-1a7e15d5.js");
    ::STRINGS[2] = uString::Const("changeprofilepage-afa947d4.js");
    ::STRINGS[3] = uString::Const("createactivitypage-6af1c14a.js");
    ::STRINGS[4] = uString::Const("loginpage-bcadec74.js");
    ::STRINGS[5] = uString::Const("mainpage-7fd1bcfa.js");
    ::STRINGS[6] = uString::Const("qrcode-4cf78d56.js");
    ::STRINGS[7] = uString::Const("registerpage-bfc7cdda.js");
    ::STRINGS[8] = uString::Const("settingpage-d168b46d.js");
    ::STRINGS[9] = uString::Const("viewactivitypage-72771923.js");
    type->SetFields(0,
        ::g::Uno::IO::BundleFile_typeof(), (uintptr_t)&LoginPage_bundle::ChangePassword90b9ab70_, uFieldFlagsStatic,
        ::g::Uno::IO::BundleFile_typeof(), (uintptr_t)&LoginPage_bundle::ChangeProfilePage3aaa4757_, uFieldFlagsStatic,
        ::g::Uno::IO::BundleFile_typeof(), (uintptr_t)&LoginPage_bundle::CreateActivityPage6191b187_, uFieldFlagsStatic,
        ::g::Uno::IO::BundleFile_typeof(), (uintptr_t)&LoginPage_bundle::LoginPage1255ca11_, uFieldFlagsStatic,
        ::g::Uno::IO::BundleFile_typeof(), (uintptr_t)&LoginPage_bundle::MainPagee9645955_, uFieldFlagsStatic,
        ::g::Uno::IO::BundleFile_typeof(), (uintptr_t)&LoginPage_bundle::QRCode8ea3ff9b_, uFieldFlagsStatic,
        ::g::Uno::IO::BundleFile_typeof(), (uintptr_t)&LoginPage_bundle::RegisterPage39a45867_, uFieldFlagsStatic,
        ::g::Uno::IO::BundleFile_typeof(), (uintptr_t)&LoginPage_bundle::SettingPage4b8596d2_, uFieldFlagsStatic,
        ::g::Uno::IO::BundleFile_typeof(), (uintptr_t)&LoginPage_bundle::ViewActivityPage252a2a0e_, uFieldFlagsStatic);
}

uClassType* LoginPage_bundle_typeof()
{
    static uSStrong<uClassType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 9;
    options.TypeSize = sizeof(uClassType);
    type = uClassType::New("LoginPage_bundle", options);
    type->fp_build_ = LoginPage_bundle_build;
    type->fp_cctor_ = LoginPage_bundle__cctor__fn;
    return type;
}

uSStrong< ::g::Uno::IO::BundleFile*> LoginPage_bundle::ChangePassword90b9ab70_;
uSStrong< ::g::Uno::IO::BundleFile*> LoginPage_bundle::ChangeProfilePage3aaa4757_;
uSStrong< ::g::Uno::IO::BundleFile*> LoginPage_bundle::CreateActivityPage6191b187_;
uSStrong< ::g::Uno::IO::BundleFile*> LoginPage_bundle::LoginPage1255ca11_;
uSStrong< ::g::Uno::IO::BundleFile*> LoginPage_bundle::MainPagee9645955_;
uSStrong< ::g::Uno::IO::BundleFile*> LoginPage_bundle::QRCode8ea3ff9b_;
uSStrong< ::g::Uno::IO::BundleFile*> LoginPage_bundle::RegisterPage39a45867_;
uSStrong< ::g::Uno::IO::BundleFile*> LoginPage_bundle::SettingPage4b8596d2_;
uSStrong< ::g::Uno::IO::BundleFile*> LoginPage_bundle::ViewActivityPage252a2a0e_;
// }

} // ::g
