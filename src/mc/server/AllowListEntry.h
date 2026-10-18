#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/platform/UUID.h"
#include "mc/server/IJsonSerializable.h"

// auto generated forward declare list
// clang-format off
namespace Json { class Value; }
// clang-format on

class AllowListEntry : public ::IJsonSerializable {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 24, std::string> mName;
    ::ll::TypedStorage<8, 16, ::mce::UUID> mUuid;
    ::ll::TypedStorage<8, 24, std::string> mXuid;
    ::ll::TypedStorage<8, 24, std::string> mPsnId;
    ::ll::TypedStorage<8, 24, std::string> mNsaId;
    ::ll::TypedStorage<1, 1, bool>         mIgnoresPlayerLimit;
#else // @header-generator platform
    ::ll::TypedStorage<8, 32, ::std::string> mName;
    ::ll::TypedStorage<8, 16, ::mce::UUID>   mUuid;
    ::ll::TypedStorage<8, 32, ::std::string> mXuid;
    ::ll::TypedStorage<8, 32, ::std::string> mPsnId;
    ::ll::TypedStorage<8, 32, ::std::string> mNsaId;
    ::ll::TypedStorage<1, 1, bool>           mIgnoresPlayerLimit;
#endif // @header-generator platform
    // NOLINTEND

#if defined(LL_PLAT_A) // @header-generator platform
public:
    // prevent constructor by default
    AllowListEntry& operator=(AllowListEntry const&);
    AllowListEntry();

#else // @header-generator platform
#ifdef LL_PLAT_S
public:
    // prevent constructor by default
    AllowListEntry& operator=(AllowListEntry const&);
    AllowListEntry(AllowListEntry const&);
    AllowListEntry();

#else // LL_PLAT_C
public:
    // prevent constructor by default
    AllowListEntry();

#endif
#endif // @header-generator platform
public:
    // virtual functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    virtual ~AllowListEntry();
#else // @header-generator platform
    virtual ::Json::Value serialize() const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::Json::Value serialize() const;

    virtual void deserialize(::Json::Value const&);
#else // @header-generator platform
    virtual void deserialize(::Json::Value const& root) /*override*/;
#endif // @header-generator platform
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI AllowListEntry(::AllowListEntry const&);
#else // @header-generator platform
    MCNAPI AllowListEntry(
        ::std::string name,
        ::mce::UUID   uuid,
        ::std::string xuid,
        ::std::string psnId,
        ::std::string nsaId,
        bool          ignorePLayerLimit
    );

#ifdef LL_PLAT_S
    MCNAPI ::AllowListEntry& operator=(::AllowListEntry&&);
#endif
#endif // @header-generator platform
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void* $ctor(::AllowListEntry const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
#else // @header-generator platform
    MCNAPI void* $ctor(
        ::std::string name,
        ::mce::UUID   uuid,
        ::std::string xuid,
        ::std::string psnId,
        ::std::string nsaId,
        bool          ignorePLayerLimit
    );
#endif // @header-generator platform
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI ::Json::Value $serialize() const;

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $deserialize(::Json::Value const&);
    // NOLINTEND
#else // @header-generator platform
    MCNAPI void $deserialize(::Json::Value const& root);
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
