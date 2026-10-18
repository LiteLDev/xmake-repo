#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/client/world/WorldJoinedRecordType.h"
#include "mc/world/level/GameType.h"

// auto generated forward declare list
// clang-format off
namespace Json { class Value; }
// clang-format on

#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
// auto generated inclusion list
#include "mc/client/world/WorldJoinedRecordType.h"
#include "mc/world/level/GameType.h"

// auto generated forward declare list
// clang-format off
namespace Json { class Value; }
// clang-format on

#else // @header-generator platform
#endif // @header-generator platform
#endif // @header-generator platform
namespace World {

#if defined(LL_PLAT_A) // @header-generator platform
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
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
class WorldJoinedRecord {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 32, ::std::string> mName;
    ::ll::TypedStorage<4, 4, ::GameType>     mGameType;
    ::ll::TypedStorage<8, 8, int64>          mTimeJoined;
    ::ll::TypedStorage<1, 1, bool>           mIsEditorWorld;
    // NOLINTEND

public:
    // prevent constructor by default
    WorldJoinedRecord();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~WorldJoinedRecord() = default;

    virtual ::World::WorldJoinedRecordType getWorldJoinedRecordType() const = 0;

    virtual bool operator==(::World::WorldJoinedRecord const& other) const = 0;

    virtual void serializeExtended(::Json::Value& outJsonValue) const = 0;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI WorldJoinedRecord(::std::string const& name, ::GameType gameType, bool isEditorWorld);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::std::string const& name, ::GameType gameType, bool isEditorWorld);
    // NOLINTEND
};
#else // @header-generator platform
class WorldJoinedRecord {};
#endif // @header-generator platform
#endif // @header-generator platform

} // namespace World
