#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/client/world/WorldJoinedRecord.h"
#include "mc/client/world/WorldJoinedRecordType.h"
#include "mc/world/level/GameType.h"

// auto generated forward declare list
// clang-format off
namespace Json { class Value; }
// clang-format on

#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
// auto generated inclusion list
#include "mc/client/world/WorldJoinedRecord.h"
#include "mc/client/world/WorldJoinedRecordType.h"

// auto generated forward declare list
// clang-format off
namespace Json { class Value; }
// clang-format on

#else // @header-generator platform
#endif // @header-generator platform
#endif // @header-generator platform
namespace World {

#if defined(LL_PLAT_A) // @header-generator platform
class NetworkJoinedRecord : public ::World::WorldJoinedRecord {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, std::string> mAddress;
    ::ll::TypedStorage<4, 4, int>          mPort;
    // NOLINTEND

public:
    // prevent constructor by default
    NetworkJoinedRecord();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~NetworkJoinedRecord();

    virtual ::World::WorldJoinedRecordType getWorldJoinedRecordType() const;

    virtual bool operator==(::World::WorldJoinedRecord const&) const;

    virtual void serializeExtended(::Json::Value&) const;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI ::World::WorldJoinedRecordType $getWorldJoinedRecordType() const;

    MCNAPI void $serializeExtended(::Json::Value&) const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
class NetworkJoinedRecord : public ::World::WorldJoinedRecord {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 32, ::std::string> mAddress;
    ::ll::TypedStorage<4, 4, int>            mPort;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ::World::WorldJoinedRecordType getWorldJoinedRecordType() const /*override*/;

    virtual bool operator==(::World::WorldJoinedRecord const& other) const /*override*/;

    virtual void serializeExtended(::Json::Value& outJsonValue) const /*override*/;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCFOLD ::World::WorldJoinedRecordType $getWorldJoinedRecordType() const;

    MCAPI void $serializeExtended(::Json::Value& outJsonValue) const;
    // NOLINTEND
};
#else // @header-generator platform
class NetworkJoinedRecord {};
#endif // @header-generator platform
#endif // @header-generator platform

} // namespace World
