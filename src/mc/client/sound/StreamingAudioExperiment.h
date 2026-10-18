#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/client/sound/StreamingMusicEntry.h"
#include "mc/deps/core/NetworkConnectionType.h"

// auto generated forward declare list
// clang-format off
struct OnlineAudioStreamEnded;
namespace Audio { class OnlineAudioStream; }
namespace Core { class Path; }
// clang-format on

class StreamingAudioExperiment {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 48>                                                     mIsEnabled;
    ::ll::UntypedStorage<8, 48>                                                     mGetNetworkConnectionType;
    ::ll::UntypedStorage<8, 48>                                                     mOnSessionEnded;
    ::ll::TypedStorage<8, 48, std::function<bool(const Core::Path&)>>               mCanPlayOnlineAudioForFile;
    ::ll::TypedStorage<8, 40, std::unordered_map<std::string, StreamingMusicEntry>> mStreamingMusicTable;
    ::ll::TypedStorage<8, 40, std::unordered_set<std::string>>                      mAllowedEventNames;
    ::ll::TypedStorage<4, 4, uint>                                                  mBufferSizeBytes;
    ::ll::TypedStorage<4, 4, uint>                                                  mFetchSizeBytes;
    ::ll::TypedStorage<4, 4, float>                                                 mPrefetchMultiplier;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ~StreamingAudioExperiment();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
// auto generated inclusion list
#include "mc/deps/core/NetworkConnectionType.h"

// auto generated forward declare list
// clang-format off
struct OnlineAudioStreamEnded;
struct StreamingMusicEntry;
namespace Core { class Path; }
// clang-format on

class StreamingAudioExperiment {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 64, ::std::function<bool()>>                                    mIsEnabled;
    ::ll::TypedStorage<8, 64, ::std::function<::NetworkConnectionType()>>                 mGetNetworkConnectionType;
    ::ll::TypedStorage<8, 64, ::std::function<void(::OnlineAudioStreamEnded)>>            mOnSessionEnded;
    ::ll::TypedStorage<8, 64, ::std::function<bool(::Core::Path const&)>>                 mCanPlayOnlineAudioForFile;
    ::ll::TypedStorage<8, 64, ::std::unordered_map<::std::string, ::StreamingMusicEntry>> mStreamingMusicTable;
    ::ll::TypedStorage<8, 64, ::std::unordered_set<::std::string>>                        mAllowedEventNames;
    ::ll::TypedStorage<4, 4, uint>                                                        mBufferSizeBytes;
    ::ll::TypedStorage<4, 4, uint>                                                        mFetchSizeBytes;
    ::ll::TypedStorage<4, 4, float>                                                       mPrefetchMultiplier;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ~StreamingAudioExperiment();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};
#else // @header-generator platform
class StreamingAudioExperiment {};
#endif // @header-generator platform
#endif // @header-generator platform
