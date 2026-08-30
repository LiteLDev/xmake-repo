#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
struct FileInfo;
namespace Core { class Path; }
// clang-format on

class IFilePicker {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~IFilePicker() = default;

    virtual void initFilePick(::Core::Path const&, std::function<void(bool, FileInfo)>) = 0;

    virtual ulong readBytes(::FileInfo const&, ulong, ulong, std::vector<uchar>&) = 0;

    virtual bool writeBytes(::FileInfo const&, ulong, ulong, std::vector<uchar> const&) = 0;
    // NOLINTEND
};
