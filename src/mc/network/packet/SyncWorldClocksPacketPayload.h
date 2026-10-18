#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#else // @header-generator platform
#endif // @header-generator platform
#include "mc/network/packet/SyncWorldClockStateData.h"
#include "mc/world/level/clock/TimeMarkerData.h"
#include "mc/world/level/clock/WorldClockData.h"
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform

// auto generated forward declare list
// clang-format off
struct SyncWorldClockStateData;
struct TimeMarkerData;
struct WorldClockData;
// clang-format on
#endif // @header-generator platform

struct SyncWorldClocksPacketPayload {
public:
    // SyncWorldClocksPacketPayload inner types declare
    // clang-format off
#if defined(LL_PLAT_A) // @header-generator platform
    struct SyncStateData;
    struct InitializeRegistryData;
#else // @header-generator platform
#endif // @header-generator platform
    struct AddTimeMarkerData;
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
    struct InitializeRegistryData;
#endif // @header-generator platform
    struct RemoveTimeMarkerData;
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
    struct SyncStateData;
#endif // @header-generator platform
    // clang-format on

    // SyncWorldClocksPacketPayload inner types define
#if defined(LL_PLAT_A) // @header-generator platform
    struct SyncStateData {
#else // @header-generator platform
    struct AddTimeMarkerData {
#endif // @header-generator platform
    public:
        // member variables
        // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
        ::ll::TypedStorage<8, 24, std::vector<SyncWorldClockStateData>> mClockData;
#else // @header-generator platform
        ::ll::TypedStorage<8, 8, uint64>                           mClockId;
        ::ll::TypedStorage<8, 24, ::std::vector<::TimeMarkerData>> mTimeMarkers;
        // NOLINTEND

    public:
        // member functions
        // NOLINTBEGIN
        MCAPI bool operator==(::SyncWorldClocksPacketPayload::AddTimeMarkerData const& rhs) const;
#endif // @header-generator platform
        // NOLINTEND
    };

    struct InitializeRegistryData {
    public:
        // member variables
        // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
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
#else // @header-generator platform
        ::ll::TypedStorage<8, 24, ::std::vector<::WorldClockData>> mClockData;
#endif // @header-generator platform
        // NOLINTEND
    };

    struct RemoveTimeMarkerData {
    public:
        // member variables
        // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
        ::ll::TypedStorage<8, 8, ulong>               mClockId;
        ::ll::TypedStorage<8, 24, std::vector<ulong>> mTimeMarkerIds;
#else // @header-generator platform
        ::ll::TypedStorage<8, 8, uint64>                 mClockId;
        ::ll::TypedStorage<8, 24, ::std::vector<uint64>> mTimeMarkerIds;
#endif // @header-generator platform
        // NOLINTEND
    };

#if defined(LL_PLAT_A) // @header-generator platform
    using SyncWorldClocksPacketData = std::variant<
        SyncWorldClocksPacketPayload::SyncStateData,
        SyncWorldClocksPacketPayload::InitializeRegistryData,
        SyncWorldClocksPacketPayload::AddTimeMarkerData,
        SyncWorldClocksPacketPayload::RemoveTimeMarkerData>;
#else // @header-generator platform
    struct SyncStateData {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<8, 24, ::std::vector<::SyncWorldClockStateData>> mClockData;
        // NOLINTEND
    };

    using SyncWorldClocksPacketData = ::std::variant<
        ::SyncWorldClocksPacketPayload::SyncStateData,
        ::SyncWorldClocksPacketPayload::InitializeRegistryData,
        ::SyncWorldClocksPacketPayload::AddTimeMarkerData,
        ::SyncWorldClocksPacketPayload::RemoveTimeMarkerData>;
#endif // @header-generator platform

public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
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
#else // @header-generator platform
    ::ll::TypedStorage<
        8,
        40,
        ::std::variant<
            ::SyncWorldClocksPacketPayload::SyncStateData,
            ::SyncWorldClocksPacketPayload::InitializeRegistryData,
            ::SyncWorldClocksPacketPayload::AddTimeMarkerData,
            ::SyncWorldClocksPacketPayload::RemoveTimeMarkerData>>
        mData;
#endif // @header-generator platform
    // NOLINTEND
};
