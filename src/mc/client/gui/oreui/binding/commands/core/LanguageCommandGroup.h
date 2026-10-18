#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/client/gui/oreui/binding/CommandGroupBase.h"
#include "mc/client/gui/oreui/binding/methods/CallableImpl.h"

#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
// auto generated inclusion list
#include "mc/client/gui/oreui/binding/CommandGroupBase.h"
#include "mc/client/gui/oreui/binding/methods/CallableImpl.h"

#else // @header-generator platform
#endif // @header-generator platform
#endif // @header-generator platform
namespace OreUI {

#if defined(LL_PLAT_A) // @header-generator platform
class LanguageCommandGroup : public ::OreUI::CommandGroupBase<OreUI::LanguageCommandGroup> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 144> mTranslate;
    ::ll::UntypedStorage<8, 144> mFormatDate;
    ::ll::UntypedStorage<8, 144> mGetHowLongAgoAsString;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~LanguageCommandGroup();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
class LanguageCommandGroup : public ::OreUI::CommandGroupBase<::OreUI::LanguageCommandGroup> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::
        TypedStorage<8, 168, ::OreUI::Detail::CallableImpl<::std::string, ::std::string, ::std::vector<::std::string>>>
                                                                                    mTranslate;
    ::ll::TypedStorage<8, 168, ::OreUI::Detail::CallableImpl<::std::string, int64>> mFormatDate;
    ::ll::TypedStorage<8, 168, ::OreUI::Detail::CallableImpl<::std::string, int64>> mGetHowLongAgoAsString;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI LanguageCommandGroup();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor();
    // NOLINTEND
};
#else // @header-generator platform
class LanguageCommandGroup {};
#endif // @header-generator platform
#endif // @header-generator platform

} // namespace OreUI
