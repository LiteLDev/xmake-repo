#pragma once

#include "mc/_HeaderOutputPredefine.h"
#if defined(LL_PLAT_A) // @header-generator platform

// auto generated inclusion list
#include "mc/world/level/timelines/AttributeTrack.h"
#include "mc/world/level/timelines/TimelineErrorCode.h"
#else // @header-generator platform
#endif // @header-generator platform

class AttributeLayerTrack {
public:
    // AttributeLayerTrack inner types declare
    // clang-format off
#if defined(LL_PLAT_A) // @header-generator platform
    struct TrackEntry;
#else // @header-generator platform
#endif // @header-generator platform
    class Builder;
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
    struct TrackEntry;
#endif // @header-generator platform
    // clang-format on

    // AttributeLayerTrack inner types define
#if defined(LL_PLAT_A) // @header-generator platform
    struct TrackEntry {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<8, 24, std::string>      mTrackName;
        ::ll::TypedStorage<8, 80, ::AttributeTrack> mTrack;
        // NOLINTEND
    };

#else // @header-generator platform
#endif // @header-generator platform
    class Builder {
    public:
        // member variables
        // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
        ::ll::TypedStorage<8, 24, std::vector<AttributeTrack>>     mAttrTracks;
        ::ll::TypedStorage<4, 8, std::optional<TimelineErrorCode>> mAttrTrackError;
        ::ll::UntypedStorage<8, 88>                                mAttributeLayerTrack;
#else // @header-generator platform
        ::ll::UntypedStorage<8, 24>  mUnk51ad10;
        ::ll::UntypedStorage<4, 8>   mUnk68fc11;
        ::ll::UntypedStorage<8, 104> mUnk70b049;
#endif // @header-generator platform
        // NOLINTEND

    public:
        // prevent constructor by default
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
        Builder& operator=(Builder const&);
        Builder(Builder const&);
#endif // @header-generator platform
        Builder();
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
    };

    struct TrackEntry {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<8, 32> mUnk68e12f;
        ::ll::UntypedStorage<8, 80> mUnke84c76;
        // NOLINTEND

    public:
        // prevent constructor by default
        TrackEntry& operator=(TrackEntry const&);
        TrackEntry(TrackEntry const&);
        TrackEntry();
#endif // @header-generator platform
    };

public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 24, std::vector<AttributeLayerTrack::TrackEntry>> mTracks;
    ::ll::TypedStorage<4, 4, int>                                           mPriority;
    ::ll::TypedStorage<8, 24, std::string>                                  mAttributeLayerName;
    ::ll::TypedStorage<8, 24, std::string>                                  mNoiseName;
    ::ll::TypedStorage<4, 4, uint>                                          mLocalTransitionTicks;
#else // @header-generator platform
    ::ll::TypedStorage<8, 24, ::std::vector<::AttributeLayerTrack::TrackEntry>> mTracks;
    ::ll::TypedStorage<4, 4, int>                                               mPriority;
    ::ll::TypedStorage<8, 32, ::std::string>                                    mAttributeLayerName;
    ::ll::TypedStorage<8, 32, ::std::string>                                    mNoiseName;
    ::ll::TypedStorage<4, 4, uint>                                              mLocalTransitionTicks;
#endif // @header-generator platform
    // NOLINTEND
};
