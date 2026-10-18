#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/textobject/ITextObject.h"

// auto generated forward declare list
// clang-format off
#if defined(LL_PLAT_A) // @header-generator platform
class Actor;
class ResolvedTextObject;
class Scoreboard;
#else // @header-generator platform
#endif // @header-generator platform
struct ResolveData;
namespace Json { class Value; }
// clang-format on

class TextObjectRoot : public ::ITextObject {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 24, std::vector<std::unique_ptr<ITextObject>>> mChildren;
#else // @header-generator platform
    ::ll::UntypedStorage<8, 24> mUnk59ae9c;
#endif // @header-generator platform
    // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform

public:
    // prevent constructor by default
    TextObjectRoot& operator=(TextObjectRoot const&);
    TextObjectRoot(TextObjectRoot const&);
    TextObjectRoot();
#endif // @header-generator platform

public:
    // virtual functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    virtual ~TextObjectRoot();
#else // @header-generator platform
    virtual ~TextObjectRoot() /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual std::string asString() const;
#else // @header-generator platform
    virtual ::Json::Value resolve(::ResolveData const& resolveData) const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::Json::Value asJsonValue() const;
#else // @header-generator platform
    virtual ::std::string asString() const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::Json::Value resolve(::ResolveData const&) const;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI void addChild(std::unique_ptr<ITextObject>);

    MCNAPI void clear();

    MCNAPI bool isEmpty() const;

    MCNAPI ::ResolvedTextObject resolveRoot(::Actor const&, ::Scoreboard const&) const;
#else // @header-generator platform
    virtual ::Json::Value asJsonValue() const /*override*/;
#endif // @header-generator platform
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI std::string $asString() const;
#else // @header-generator platform
    MCNAPI ::Json::Value $resolve(::ResolveData const& resolveData) const;

    MCNAPI ::std::string $asString() const;
#endif // @header-generator platform

    MCNAPI ::Json::Value $asJsonValue() const;

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::Json::Value $resolve(::ResolveData const&) const;
#else // @header-generator platform

#endif // @header-generator platform
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
