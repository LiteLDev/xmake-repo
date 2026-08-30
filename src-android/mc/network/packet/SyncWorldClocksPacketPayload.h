#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/network/packet/SyncWorldClockStateData.h"
#include "mc/world/level/clock/TimeMarkerData.h"
#include "mc/world/level/clock/WorldClockData.h"

struct SyncWorldClocksPacketPayload {
public:
    // SyncWorldClocksPacketPayload inner types declare
    // clang-format off
    struct SyncStateData;
    struct InitializeRegistryData;
    struct AddTimeMarkerData;
    struct RemoveTimeMarkerData;
    // clang-format on

    // SyncWorldClocksPacketPayload inner types define
    struct SyncStateData {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<8, 24, std::vector<SyncWorldClockStateData>> mClockData;
        // NOLINTEND
    };

    struct InitializeRegistryData {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<8, 24, std::vector<WorldClockData>> mClockData;
        // NOLINTEND
    };

    struct AddTimeMarkerData {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<8, 8, ulong>                        mClockId;
        ::ll::TypedStorage<8, 24, std::vector<TimeMarkerData>> mTimeMarkers;
        // NOLINTEND

    public:
        // member functions
        // NOLINTBEGIN
        MCNAPI bool operator==(::SyncWorldClocksPacketPayload::AddTimeMarkerData const&) const;
        // NOLINTEND
    };

    struct RemoveTimeMarkerData {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<8, 8, ulong>               mClockId;
        ::ll::TypedStorage<8, 24, std::vector<ulong>> mTimeMarkerIds;
        // NOLINTEND
    };

    using SyncWorldClocksPacketData = std::variant<
        SyncWorldClocksPacketPayload::SyncStateData,
        SyncWorldClocksPacketPayload::InitializeRegistryData,
        SyncWorldClocksPacketPayload::AddTimeMarkerData,
        SyncWorldClocksPacketPayload::RemoveTimeMarkerData>;

public:
    // member variables
    // NOLINTBEGIN
    // clang-format off
    ::ll::TypedStorage<8, 40, std::variant<SyncWorldClocksPacketPayload::SyncStateData, SyncWorldClocksPacketPayload::InitializeRegistryData, SyncWorldClocksPacketPayload::AddTimeMarkerData, SyncWorldClocksPacketPayload::RemoveTimeMarkerData>> mData;
    // clang-format on
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI explicit SyncWorldClocksPacketPayload(std::vector<SyncWorldClockStateData>);

    MCNAPI explicit SyncWorldClocksPacketPayload(std::vector<WorldClockData>);

    MCNAPI SyncWorldClocksPacketPayload(ulong, std::vector<TimeMarkerData>);

    MCNAPI SyncWorldClocksPacketPayload(ulong, std::vector<ulong>);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(std::vector<SyncWorldClockStateData>);

    MCNAPI void* $ctor(std::vector<WorldClockData>);

    MCNAPI void* $ctor(ulong, std::vector<TimeMarkerData>);

    MCNAPI void* $ctor(ulong, std::vector<ulong>);
    // NOLINTEND
};
