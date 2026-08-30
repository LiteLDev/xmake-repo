#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/timelines/AttributeTrack.h"
#include "mc/world/level/timelines/TimelineErrorCode.h"

class AttributeLayerTrack {
public:
    // AttributeLayerTrack inner types declare
    // clang-format off
    struct TrackEntry;
    class Builder;
    // clang-format on

    // AttributeLayerTrack inner types define
    struct TrackEntry {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<8, 24, std::string>      mTrackName;
        ::ll::TypedStorage<8, 80, ::AttributeTrack> mTrack;
        // NOLINTEND
    };

    class Builder {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<8, 24, std::vector<AttributeTrack>>     mAttrTracks;
        ::ll::TypedStorage<4, 8, std::optional<TimelineErrorCode>> mAttrTrackError;
        ::ll::UntypedStorage<8, 88>                                mAttributeLayerTrack;
        // NOLINTEND

    public:
        // prevent constructor by default
        Builder();
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, std::vector<AttributeLayerTrack::TrackEntry>> mTracks;
    ::ll::TypedStorage<4, 4, int>                                           mPriority;
    ::ll::TypedStorage<8, 24, std::string>                                  mAttributeLayerName;
    ::ll::TypedStorage<8, 24, std::string>                                  mNoiseName;
    ::ll::TypedStorage<4, 4, uint>                                          mLocalTransitionTicks;
    // NOLINTEND
};
