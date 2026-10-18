#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/deps/core/resource/ContentIdentity.h"
#include "mc/platform/UUID.h"

// auto generated forward declare list
// clang-format off
class Skin;
// clang-format on

class SkinHandle {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 16, ::mce::UUID>       mPackId;
    ::ll::TypedStorage<8, 24, ::ContentIdentity> mContentIdentity;
    ::ll::TypedStorage<4, 4, int>                mSkinIndex;
    ::ll::TypedStorage<8, 24, std::string>       mSkinName;
    ::ll::TypedStorage<8, 24, std::string>       mCapeId;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI SkinHandle(::mce::UUID const&, std::string const&);

    MCNAPI SkinHandle(::mce::UUID const&, int, std::string const&);

    MCNAPI ::ContentIdentity const& getContentIdentity() const;

    MCNAPI int getSkinIndex() const;

    MCNAPI std::string const& getSkinName() const;

    MCNAPI void initialize(::Skin const*);

    MCNAPI void initializeFromSerializedSkinName(std::string const&, bool const);

    MCNAPI void invalidate();

    MCNAPI bool isClassicPersonaSkin() const;

    MCNAPI bool isHandleOf(::Skin const*) const;

    MCNAPI bool isPersonaSkin() const;

    MCNAPI bool operator!=(::SkinHandle const&) const;

    MCNAPI bool operator==(::SkinHandle const&) const;

    MCNAPI std::string serialize() const;

    MCNAPI std::string serializeWithLegacyName() const;

    MCNAPI void setCapeId(std::string const&);

    MCNAPI bool valid() const;

    MCNAPI ~SkinHandle();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::SkinHandle const& getInvalid();
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI static int const& INVALID_SKIN_INDEX();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::mce::UUID const&, std::string const&);

    MCNAPI void* $ctor(::mce::UUID const&, int, std::string const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
#else // @header-generator platform
class SkinHandle {};
#endif // @header-generator platform
