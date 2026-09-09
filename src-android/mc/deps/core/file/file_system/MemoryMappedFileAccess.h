#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/file/file_system/IFileAccess.h"
#include "mc/deps/core/file/file_system/IFileReadAccess.h"
#include "mc/deps/core/file/file_system/IFileWriteAccess.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"

// auto generated forward declare list
// clang-format off
class FileAccessTransforms;
namespace Core { class PathView; }
// clang-format on

class MemoryMappedFileAccess : public ::IFileAccess {
public:
    // MemoryMappedFileAccess inner types declare
    // clang-format off
    class MemoryMappedFileReadAccess;
    class MemoryMappedFileWriteAccess;
    struct StreamDetails;
    struct StreamHandle;
    // clang-format on

    // MemoryMappedFileAccess inner types define
    class MemoryMappedFileReadAccess : public ::IFileReadAccess {
    public:
        // virtual functions
        // NOLINTBEGIN
        virtual ~MemoryMappedFileReadAccess();

        virtual ulong fread(void*, ulong, ulong, void*) const;
        // NOLINTEND

    public:
        // destructor thunk
        // NOLINTBEGIN
        MCNAPI void $dtor();
        // NOLINTEND

    public:
        // virtual function thunks
        // NOLINTBEGIN
        MCNAPI ulong $fread(void*, ulong, ulong, void*) const;
        // NOLINTEND

    public:
        // vftables
        // NOLINTBEGIN
        MCNAPI static void** $vftable();
        // NOLINTEND
    };

    class MemoryMappedFileWriteAccess : public ::IFileWriteAccess {
    public:
        // virtual functions
        // NOLINTBEGIN
        virtual ~MemoryMappedFileWriteAccess();

        virtual ulong fwrite(void const*, ulong, ulong, void*);
        // NOLINTEND

    public:
        // destructor thunk
        // NOLINTBEGIN
        MCNAPI void $dtor();
        // NOLINTEND

    public:
        // virtual function thunks
        // NOLINTBEGIN
        MCNAPI ulong $fwrite(void const*, ulong, ulong, void*);
        // NOLINTEND

    public:
        // vftables
        // NOLINTBEGIN
        MCNAPI static void** $vftable();
        // NOLINTEND
    };

    struct StreamDetails {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<8, 24, std::vector<uchar>> mStream;
        ::ll::TypedStorage<1, 1, bool>                mReadAllowed;
        ::ll::TypedStorage<1, 1, bool>                mWriteAllowed;
        ::ll::TypedStorage<1, 1, bool>                mAlwaysWriteAtEnd;
        ::ll::TypedStorage<1, 1, bool>                mDirty;
        // NOLINTEND

    public:
        // prevent constructor by default
        StreamDetails& operator=(StreamDetails const&);
        StreamDetails(StreamDetails const&);
        StreamDetails();
    };

    struct StreamHandle {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<8, 8, ::MemoryMappedFileAccess::StreamDetails*> mStream;
        ::ll::TypedStorage<8, 8, ulong>                                    mPosition;
        // NOLINTEND
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::MemoryMappedFileAccess::MemoryMappedFileReadAccess>                    mReadInterface;
    ::ll::TypedStorage<8, 8, ::MemoryMappedFileAccess::MemoryMappedFileWriteAccess>                   mWriteInterface;
    ::ll::TypedStorage<8, 8, std::unique_ptr<FileAccessTransforms>>                                   mTransforms;
    ::ll::TypedStorage<8, 40, std::unordered_map<std::string, MemoryMappedFileAccess::StreamDetails>> mStreams;
    ::ll::TypedStorage<4, 40, std::mutex>                                                             mStreamsLock;
    ::ll::TypedStorage<8, 24, std::list<MemoryMappedFileAccess::StreamHandle>>                        mStreamHandles;
    ::ll::TypedStorage<4, 40, std::mutex> mStreamHandlesLock;
    ::ll::UntypedStorage<8, 24>           mInner;
    // NOLINTEND

public:
    // prevent constructor by default
    MemoryMappedFileAccess();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~MemoryMappedFileAccess();

    virtual void* fopen(::Core::PathView, std::string const&);

    virtual int fclose(void*);

    virtual int fseek(void*, long, int);

    virtual long ftell(void*);

    virtual ::IFileReadAccess const* getReadInterface() const;

    virtual ::IFileWriteAccess* getWriteInterface();

    virtual void unload();
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI MemoryMappedFileAccess(
        ::gsl::not_null<Bedrock::NonOwnerPointer<IFileAccess>> const&,
        std::unique_ptr<FileAccessTransforms>
    );
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI static ::FileAccessTransforms const& EMPTY_TRANSFORMS();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void*
    $ctor(::gsl::not_null<Bedrock::NonOwnerPointer<IFileAccess>> const&, std::unique_ptr<FileAccessTransforms>);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI void* $fopen(::Core::PathView, std::string const&);

    MCNAPI int $fclose(void*);

    MCNAPI int $fseek(void*, long, int);

    MCNAPI long $ftell(void*);

    MCNAPI ::IFileReadAccess const* $getReadInterface() const;

    MCNAPI ::IFileWriteAccess* $getWriteInterface();

    MCNAPI void $unload();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
