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
#if defined(LL_PLAT_A) // @header-generator platform
        virtual ~MemoryMappedFileReadAccess();

        virtual ulong fread(void*, ulong, ulong, void*) const;
        // NOLINTEND

    public:
        // destructor thunk
        // NOLINTBEGIN
        MCNAPI void $dtor();
#else // @header-generator platform
        virtual uint64 fread(void* buffer, uint64, uint64 count, void* file) const /*override*/;
#endif // @header-generator platform
        // NOLINTEND

    public:
        // virtual function thunks
        // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
        MCNAPI ulong $fread(void*, ulong, ulong, void*) const;
#else // @header-generator platform
        MCNAPI uint64 $fread(void* buffer, uint64, uint64 count, void* file) const;


#endif // @header-generator platform
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
#if defined(LL_PLAT_A) // @header-generator platform
        virtual ~MemoryMappedFileWriteAccess();

        virtual ulong fwrite(void const*, ulong, ulong, void*);
        // NOLINTEND

    public:
        // destructor thunk
        // NOLINTBEGIN
        MCNAPI void $dtor();
#else // @header-generator platform
        virtual uint64 fwrite(void const* buffer, uint64, uint64 count, void* file) /*override*/;
#endif // @header-generator platform
        // NOLINTEND

    public:
        // virtual function thunks
        // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
        MCNAPI ulong $fwrite(void const*, ulong, ulong, void*);
#else // @header-generator platform
        MCNAPI uint64 $fwrite(void const* buffer, uint64, uint64 count, void* file);


#endif // @header-generator platform
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
#if defined(LL_PLAT_A) // @header-generator platform
        ::ll::TypedStorage<8, 24, std::vector<uchar>> mStream;
        ::ll::TypedStorage<1, 1, bool>                mReadAllowed;
        ::ll::TypedStorage<1, 1, bool>                mWriteAllowed;
        ::ll::TypedStorage<1, 1, bool>                mAlwaysWriteAtEnd;
        ::ll::TypedStorage<1, 1, bool>                mDirty;
#else // @header-generator platform
        ::ll::UntypedStorage<8, 24> mUnk5a024e;
        ::ll::UntypedStorage<1, 1>  mUnk775850;
        ::ll::UntypedStorage<1, 1>  mUnkec4701;
        ::ll::UntypedStorage<1, 1>  mUnkb6b825;
        ::ll::UntypedStorage<1, 1>  mUnkb136e2;
#endif // @header-generator platform
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
#if defined(LL_PLAT_A) // @header-generator platform
        ::ll::TypedStorage<8, 8, ::MemoryMappedFileAccess::StreamDetails*> mStream;
        ::ll::TypedStorage<8, 8, ulong>                                    mPosition;
#else // @header-generator platform
        ::ll::UntypedStorage<8, 8> mUnkab4f17;
        ::ll::UntypedStorage<8, 8> mUnk52bd0b;
#endif // @header-generator platform
        // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform

    public:
        // prevent constructor by default
        StreamHandle& operator=(StreamHandle const&);
        StreamHandle(StreamHandle const&);
        StreamHandle();
#endif // @header-generator platform
    };

public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 8, ::MemoryMappedFileAccess::MemoryMappedFileReadAccess>                    mReadInterface;
    ::ll::TypedStorage<8, 8, ::MemoryMappedFileAccess::MemoryMappedFileWriteAccess>                   mWriteInterface;
    ::ll::TypedStorage<8, 8, std::unique_ptr<FileAccessTransforms>>                                   mTransforms;
    ::ll::TypedStorage<8, 40, std::unordered_map<std::string, MemoryMappedFileAccess::StreamDetails>> mStreams;
    ::ll::TypedStorage<4, 40, std::mutex>                                                             mStreamsLock;
    ::ll::TypedStorage<8, 24, std::list<MemoryMappedFileAccess::StreamHandle>>                        mStreamHandles;
    ::ll::TypedStorage<4, 40, std::mutex> mStreamHandlesLock;
    ::ll::UntypedStorage<8, 24>           mInner;
#else // @header-generator platform
    ::ll::UntypedStorage<8, 8>  mUnk476651;
    ::ll::UntypedStorage<8, 8>  mUnk78c53b;
    ::ll::UntypedStorage<8, 8>  mUnkb5f328;
    ::ll::UntypedStorage<8, 64> mUnkfc64a9;
    ::ll::UntypedStorage<8, 80> mUnka79312;
    ::ll::UntypedStorage<8, 16> mUnk887e05;
    ::ll::UntypedStorage<8, 80> mUnkd6fa0b;
    ::ll::UntypedStorage<8, 24> mUnk5e3b74;
#endif // @header-generator platform
    // NOLINTEND

public:
    // prevent constructor by default
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
    MemoryMappedFileAccess& operator=(MemoryMappedFileAccess const&);
    MemoryMappedFileAccess(MemoryMappedFileAccess const&);
#endif // @header-generator platform
    MemoryMappedFileAccess();

public:
    // virtual functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    virtual ~MemoryMappedFileAccess();
#else // @header-generator platform
    virtual ~MemoryMappedFileAccess() /*override*/ = default;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void* fopen(::Core::PathView, std::string const&);
#else // @header-generator platform
    virtual void* fopen(::Core::PathView filePath, ::std::string const& mode) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual int fclose(void*);
#else // @header-generator platform
    virtual int fclose(void* file) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual int fseek(void*, long, int);
#else // @header-generator platform
    virtual int fseek(void* file, int64 offset, int origin) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual long ftell(void*);
#else // @header-generator platform
    virtual int64 ftell(void* file) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::IFileReadAccess const* getReadInterface() const;
#else // @header-generator platform
    virtual ::IFileReadAccess const* getReadInterface() const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::IFileWriteAccess* getWriteInterface();
#else // @header-generator platform
    virtual ::IFileWriteAccess* getWriteInterface() /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void unload();
#else // @header-generator platform
    virtual void unload() /*override*/;
#endif // @header-generator platform
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI MemoryMappedFileAccess(
#if defined(LL_PLAT_A) // @header-generator platform
        ::gsl::not_null<Bedrock::NonOwnerPointer<IFileAccess>> const&,
        std::unique_ptr<FileAccessTransforms>
#else // @header-generator platform
        ::Bedrock::NotNullNonOwnerPtr<::IFileAccess> const& inner,
        ::std::unique_ptr<::FileAccessTransforms>           transforms
#endif // @header-generator platform
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
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void*
    $ctor(::gsl::not_null<Bedrock::NonOwnerPointer<IFileAccess>> const&, std::unique_ptr<FileAccessTransforms>);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
#else // @header-generator platform
    MCNAPI void* $ctor(
        ::Bedrock::NotNullNonOwnerPtr<::IFileAccess> const& inner,
        ::std::unique_ptr<::FileAccessTransforms>           transforms
    );
#endif // @header-generator platform
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void* $fopen(::Core::PathView, std::string const&);
#else // @header-generator platform
    MCNAPI void* $fopen(::Core::PathView filePath, ::std::string const& mode);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI int $fclose(void*);
#else // @header-generator platform
    MCNAPI int $fclose(void* file);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI int $fseek(void*, long, int);
#else // @header-generator platform
    MCNAPI int $fseek(void* file, int64 offset, int origin);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI long $ftell(void*);
#else // @header-generator platform
    MCNAPI int64 $ftell(void* file);
#endif // @header-generator platform

    MCNAPI ::IFileReadAccess const* $getReadInterface() const;

    MCNAPI ::IFileWriteAccess* $getWriteInterface();

    MCNAPI void $unload();
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform


#endif // @header-generator platform
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
