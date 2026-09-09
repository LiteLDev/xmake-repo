#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/file/file_system/FileSystemMode.h"
#include "mc/deps/core/file/file_system/IFileAccess.h"
#include "mc/deps/core/file/file_system/IFileReadAccess.h"
#include "mc/deps/core/file/file_system/IFileWriteAccess.h"

// auto generated forward declare list
// clang-format off
namespace Core { class PathView; }
// clang-format on

class FileSystemFileAccess : public ::IFileAccess {
public:
    // FileSystemFileAccess inner types declare
    // clang-format off
    class FileSystemFileReadAccess;
    class FileSystemFileWriteAccess;
    // clang-format on

    // FileSystemFileAccess inner types define
    class FileSystemFileReadAccess : public ::IFileReadAccess {
    public:
        // virtual functions
        // NOLINTBEGIN
        virtual ~FileSystemFileReadAccess();

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

    class FileSystemFileWriteAccess : public ::IFileWriteAccess {
    public:
        // virtual functions
        // NOLINTBEGIN
        virtual ~FileSystemFileWriteAccess();

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

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, ::FileSystemMode>                                  mMode;
    ::ll::TypedStorage<8, 8, ::FileSystemFileAccess::FileSystemFileReadAccess>  mReadInterface;
    ::ll::TypedStorage<8, 8, ::FileSystemFileAccess::FileSystemFileWriteAccess> mWriteInterface;
    // NOLINTEND

public:
    // prevent constructor by default
    FileSystemFileAccess();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~FileSystemFileAccess();

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
    MCNAPI explicit FileSystemFileAccess(::FileSystemMode);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::FileSystemMode);
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
