#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/network/realms/RealmId.h"
#include "mc/client/world/WorldJoinedRecord.h"
#include "mc/client/world/WorldJoinedRecordType.h"
#include "mc/world/level/GameType.h"

// auto generated forward declare list
// clang-format off
namespace Json { class Value; }
// clang-format on

namespace World {

class RealmJoinedRecord : public ::World::WorldJoinedRecord {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8> mRealmId;
    // NOLINTEND

public:
    // prevent constructor by default
    RealmJoinedRecord();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~RealmJoinedRecord();

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

} // namespace World
