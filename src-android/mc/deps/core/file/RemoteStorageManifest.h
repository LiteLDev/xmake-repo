#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Core {

class RemoteStorageManifest {
public:
    // RemoteStorageManifest inner types declare
    // clang-format off
    struct BlobSequence;
    struct BlobRecord;
    // clang-format on

    // RemoteStorageManifest inner types define
    enum class State : uchar {
        Good                   = 0,
        MultiChunkProcessError = 1,
        CommitLockFound        = 2,
    };

    struct BlobSequence {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<8, 24, std::string> mName;
        ::ll::TypedStorage<4, 4, int>          mNumber;
        // NOLINTEND

    public:
        // prevent constructor by default
        BlobSequence();
    };

    struct BlobRecord {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<8, 24, std::vector<Core::RemoteStorageManifest::BlobSequence>> mBlobSequences;
        ::ll::TypedStorage<8, 24, std::string>                                            mDecodedName;
        ::ll::TypedStorage<8, 8, ulong>                                                   mChunkSize;
        // NOLINTEND
    };

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI std::set<std::string> getFiles() const;
    // NOLINTEND
};

} // namespace Core
