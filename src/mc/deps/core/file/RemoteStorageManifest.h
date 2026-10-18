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
#if defined(LL_PLAT_A) // @header-generator platform
    enum class State : uchar {
        Good                   = 0,
        MultiChunkProcessError = 1,
        CommitLockFound        = 2,
    };
#else // @header-generator platform
    enum class State : uchar {};
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    struct BlobSequence {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<8, 24, std::string> mName;
        ::ll::TypedStorage<4, 4, int>          mNumber;
        // NOLINTEND
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
    struct BlobSequence {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<8, 32> mUnk65ffba;
        ::ll::UntypedStorage<4, 4>  mUnkbf716a;
        // NOLINTEND
#else // @header-generator platform
    struct BlobSequence {};
#endif // @header-generator platform
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
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
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
    public:
        // prevent constructor by default
        BlobSequence& operator=(BlobSequence const&);
        BlobSequence(BlobSequence const&);
        BlobSequence();

    public:
        // member functions
        // NOLINTBEGIN
#ifdef LL_PLAT_C
        MCNAPI ~BlobSequence();
#endif
        // NOLINTEND

    public:
        // destructor thunk
        // NOLINTBEGIN
#ifdef LL_PLAT_C
        MCNAPI void $dtor();
#endif
        // NOLINTEND
    };

    struct BlobRecord {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<8, 24> mUnkc88016;
        ::ll::UntypedStorage<8, 32> mUnk6f6bd5;
        ::ll::UntypedStorage<8, 8>  mUnk51cb16;
        // NOLINTEND

#ifdef LL_PLAT_S
    public:
        // prevent constructor by default
        BlobRecord& operator=(BlobRecord const&);
        BlobRecord(BlobRecord const&);
        BlobRecord();

#else // LL_PLAT_C
    public:
        // prevent constructor by default
        BlobRecord& operator=(BlobRecord const&);
        BlobRecord();

#endif
    public:
        // member functions
        // NOLINTBEGIN
#ifdef LL_PLAT_C
        MCNAPI BlobRecord(::Core::RemoteStorageManifest::BlobRecord const&);
#endif
        // NOLINTEND

    public:
        // constructor thunks
        // NOLINTBEGIN
#ifdef LL_PLAT_C
        MCNAPI void* $ctor(::Core::RemoteStorageManifest::BlobRecord const&);
#endif
        // NOLINTEND
    };
#else // @header-generator platform
    struct BlobRecord {};
#endif // @header-generator platform
#endif // @header-generator platform
};

} // namespace Core
