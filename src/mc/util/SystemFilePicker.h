#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/util/IFilePicker.h"

// auto generated forward declare list
// clang-format off
struct FileInfo;
namespace Core { class Path; }
// clang-format on

#if defined(LL_PLAT_A) // @header-generator platform
class SystemFilePicker : public ::IFilePicker, public ::std::enable_shared_from_this<SystemFilePicker> {
#else // @header-generator platform
class SystemFilePicker : public ::IFilePicker, public ::std::enable_shared_from_this<::SystemFilePicker> {
#endif // @header-generator platform
public:
    // virtual functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    virtual ~SystemFilePicker();
#else // @header-generator platform
    virtual ~SystemFilePicker() /*override*/ = default;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void initFilePick(::Core::Path const&, std::function<void(bool, FileInfo)>);
#else // @header-generator platform
    virtual void
    initFilePick(::Core::Path const& filePath, ::std::function<void(bool, ::FileInfo)> callback) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ulong readBytes(::FileInfo const&, ulong, ulong, std::vector<uchar>&);
#else // @header-generator platform
    virtual uint64
    readBytes(::FileInfo const& file, uint64 offset, uint64 bufferSize, ::std::vector<uchar>& buffer) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual bool writeBytes(::FileInfo const&, ulong, ulong, std::vector<uchar> const&);
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI SystemFilePicker();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
#else // @header-generator platform
    virtual bool writeBytes(
        ::FileInfo const&           file,
        uint64                      offset,
        uint64                      bufferSize,
        ::std::vector<uchar> const& buffer
    ) /*override*/;
#endif // @header-generator platform
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $initFilePick(::Core::Path const&, std::function<void(bool, FileInfo)>);
#else // @header-generator platform
    MCNAPI void $initFilePick(::Core::Path const& filePath, ::std::function<void(bool, ::FileInfo)> callback);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ulong $readBytes(::FileInfo const&, ulong, ulong, std::vector<uchar>&);
#else // @header-generator platform
    MCNAPI uint64 $readBytes(::FileInfo const& file, uint64 offset, uint64 bufferSize, ::std::vector<uchar>& buffer);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool $writeBytes(::FileInfo const&, ulong, ulong, std::vector<uchar> const&);
#else // @header-generator platform
    MCNAPI bool
    $writeBytes(::FileInfo const& file, uint64 offset, uint64 bufferSize, ::std::vector<uchar> const& buffer);


#endif // @header-generator platform
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
