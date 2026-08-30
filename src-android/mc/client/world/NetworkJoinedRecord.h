#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/world/WorldJoinedRecord.h"
#include "mc/client/world/WorldJoinedRecordType.h"
#include "mc/world/level/GameType.h"

// auto generated forward declare list
// clang-format off
namespace Json { class Value; }
// clang-format on

namespace World {

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

} // namespace World
