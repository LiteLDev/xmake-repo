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
    ::ll::TypedStorage<8, 24, std::string> mName;
    ::ll::TypedStorage<8, 16, ::mce::UUID> mUuid;
    ::ll::TypedStorage<8, 24, std::string> mXuid;
    ::ll::TypedStorage<8, 24, std::string> mPsnId;
    ::ll::TypedStorage<8, 24, std::string> mNsaId;
    ::ll::TypedStorage<1, 1, bool>         mIgnoresPlayerLimit;
    // NOLINTEND

public:
    // prevent constructor by default
    AllowListEntry& operator=(AllowListEntry const&);
    AllowListEntry();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~AllowListEntry();

    virtual ::Json::Value serialize() const;

    virtual void deserialize(::Json::Value const&);
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI AllowListEntry(::AllowListEntry const&);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::AllowListEntry const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI ::Json::Value $serialize() const;

    MCNAPI void $deserialize(::Json::Value const&);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
