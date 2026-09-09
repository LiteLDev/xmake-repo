#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/util/IFilePicker.h"

// auto generated forward declare list
// clang-format off
struct FileInfo;
namespace Core { class Path; }
// clang-format on

class SystemFilePicker : public ::IFilePicker, public ::std::enable_shared_from_this<SystemFilePicker> {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~SystemFilePicker();

    virtual void initFilePick(::Core::Path const&, std::function<void(bool, FileInfo)>);

    virtual ulong readBytes(::FileInfo const&, ulong, ulong, std::vector<uchar>&);

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
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI void $initFilePick(::Core::Path const&, std::function<void(bool, FileInfo)>);

    MCNAPI ulong $readBytes(::FileInfo const&, ulong, ulong, std::vector<uchar>&);

    MCNAPI bool $writeBytes(::FileInfo const&, ulong, ulong, std::vector<uchar> const&);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
