#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/legacy/conversion/WorldConverter.h"
#include "mc/platform/brstd/move_only_function.h"

// auto generated forward declare list
// clang-format off
namespace Social::Events { class Event; }
// clang-format on

namespace Legacy {

struct WorldConversionReport {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4>                                                mResult;
    ::ll::TypedStorage<8, 24, std::string>                                    mWorldName;
    ::ll::TypedStorage<8, 8, std::chrono::duration<double, std::ratio<1, 1>>> mConversionDurationSeconds;
    ::ll::TypedStorage<8, 8, ulong>                                           mChunksConverted;
    ::ll::TypedStorage<8, 8, ulong>                                           mTotalEstimatedChunks;
    ::ll::TypedStorage<8, 8, ulong>                                           mConvertedWorldSize;
    ::ll::TypedStorage<8, 8, ulong>                                           mFilesSum;
    ::ll::UntypedStorage<4, 4>                                                mOriginatingPlatform;
    ::ll::TypedStorage<8, 24, std::string>                                    mConverterVersion;
    // NOLINTEND

public:
    // prevent constructor by default
    WorldConversionReport& operator=(WorldConversionReport const&);
    WorldConversionReport(WorldConversionReport const&);

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ::brstd::move_only_function<void(Social::Events::Event&) const> createEventWriter() const;

    MCNAPI ~WorldConversionReport();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace Legacy
