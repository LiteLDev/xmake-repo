#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/textobject/ITextObject.h"

// auto generated forward declare list
// clang-format off
#if defined(LL_PLAT_A) // @header-generator platform
class TextObjectRoot;
#else // @header-generator platform
#endif // @header-generator platform
struct ResolveData;
namespace Json { class Value; }
// clang-format on

class TextObjectLocalizedTextWithParams : public ::ITextObject {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 24, std::string>                    mText;
    ::ll::TypedStorage<8, 8, std::unique_ptr<TextObjectRoot>> mParams;
#else // @header-generator platform
    ::ll::UntypedStorage<8, 32> mUnkff954d;
    ::ll::UntypedStorage<8, 8>  mUnkc4d1c3;
#endif // @header-generator platform
    // NOLINTEND

public:
    // prevent constructor by default
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
    TextObjectLocalizedTextWithParams& operator=(TextObjectLocalizedTextWithParams const&);
    TextObjectLocalizedTextWithParams(TextObjectLocalizedTextWithParams const&);
#endif // @header-generator platform
    TextObjectLocalizedTextWithParams();

public:
    // virtual functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    virtual ~TextObjectLocalizedTextWithParams();
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
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI TextObjectLocalizedTextWithParams(std::string, std::vector<std::string> const&);
#else // @header-generator platform
    MCNAPI TextObjectLocalizedTextWithParams(::std::string text, ::std::vector<::std::string> const& params);
#endif // @header-generator platform
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void* $ctor(std::string, std::vector<std::string> const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
#else // @header-generator platform
    MCNAPI void* $ctor(::std::string text, ::std::vector<::std::string> const& params);
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
