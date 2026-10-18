#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/textobject/ITextObject.h"

// auto generated forward declare list
// clang-format off
struct ResolveData;
namespace Json { class Value; }
// clang-format on

class TextObjectSelector : public ::ITextObject {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 24, std::string> mSelectorString;
#else // @header-generator platform
    ::ll::UntypedStorage<8, 32> mUnk1bac3d;
#endif // @header-generator platform
    // NOLINTEND

public:
    // prevent constructor by default
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
    TextObjectSelector& operator=(TextObjectSelector const&);
    TextObjectSelector(TextObjectSelector const&);
#endif // @header-generator platform
    TextObjectSelector();

public:
    // virtual functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    virtual ~TextObjectSelector();
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
    // static variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static std::string const& RAW_TEXT_SELECTOR_KEY();

    MCNAPI static std::string const& RAW_TEXT_SELECTOR_STAR();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
#else // @header-generator platform
    MCNAPI static ::std::string const& RAW_TEXT_SELECTOR_KEY();
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
    // NOLINTEND
#else // @header-generator platform
    MCNAPI ::Json::Value $resolve(::ResolveData const& resolveData) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
#else // @header-generator platform

#endif // @header-generator platform
    // NOLINTEND
};
