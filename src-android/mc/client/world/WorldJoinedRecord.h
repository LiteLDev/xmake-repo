#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/world/WorldJoinedRecordType.h"
#include "mc/world/level/GameType.h"

// auto generated forward declare list
// clang-format off
namespace Json { class Value; }
// clang-format on

namespace World {

class WorldJoinedRecord {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, std::string> mName;
    ::ll::TypedStorage<4, 4, ::GameType>   mGameType;
    ::ll::TypedStorage<8, 8, long>         mTimeJoined;
    ::ll::TypedStorage<1, 1, bool>         mIsEditorWorld;
    // NOLINTEND

public:
    // prevent constructor by default
    WorldJoinedRecord();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~WorldJoinedRecord();

    virtual ::World::WorldJoinedRecordType getWorldJoinedRecordType() const = 0;

    virtual bool operator==(::World::WorldJoinedRecord const&) const = 0;

    virtual void serializeExtended(::Json::Value&) const = 0;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace World
