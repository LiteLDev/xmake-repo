#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/textobject/ITextObject.h"

// auto generated forward declare list
// clang-format off
struct ResolveData;
namespace Json { class Value; }
// clang-format on

class TextObjectText : public ::ITextObject {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 24, std::string> mText;
#else // @header-generator platform
    ::ll::UntypedStorage<8, 32> mUnk7d5a70;
#endif // @header-generator platform
    // NOLINTEND

public:
    // prevent constructor by default
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
    TextObjectText& operator=(TextObjectText const&);
    TextObjectText(TextObjectText const&);
#endif // @header-generator platform
    TextObjectText();

public:
    // virtual functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    virtual ~TextObjectText();
#else // @header-generator platform
    virtual ::std::string asString() const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual std::string asString() const;
#else // @header-generator platform
    virtual ::Json::Value asJsonValue() const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::Json::Value asJsonValue() const;

    virtual ::Json::Value resolve(::ResolveData const&) const;
#else // @header-generator platform
    virtual ::Json::Value resolve(::ResolveData const& resolveData) const /*override*/;
#endif // @header-generator platform
    // NOLINTEND

public:
#if defined(LL_PLAT_A) // @header-generator platform
    // destructor thunk
#else // @header-generator platform
    // static functions
#endif // @header-generator platform
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $dtor();
#else // @header-generator platform
    MCNAPI static ::Json::Value asJsonValue(::std::string const& textField);
#endif // @header-generator platform
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI std::string $asString() const;
#else // @header-generator platform
    MCNAPI ::std::string $asString() const;
#endif // @header-generator platform

    MCNAPI ::Json::Value $asJsonValue() const;

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::Json::Value $resolve(::ResolveData const&) const;
#else // @header-generator platform
    MCNAPI ::Json::Value $resolve(::ResolveData const& resolveData) const;


#endif // @header-generator platform
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
