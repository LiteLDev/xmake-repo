#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace Core { class Path; }
// clang-format on

class FilePickerSettings {
public:
    // FilePickerSettings inner types declare
    // clang-format off
    struct FileDescription;
    // clang-format on

    // FilePickerSettings inner types define
    enum class PickerType : int {
        Invalid = 0,
        Open    = 1,
        Save    = 2,
    };

    struct FileDescription {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<8, 24, std::string> Extension;
        ::ll::TypedStorage<8, 24, std::string> Name;
        // NOLINTEND

    public:
        // prevent constructor by default
        FileDescription& operator=(FileDescription const&);
        FileDescription(FileDescription const&);
        FileDescription();

    public:
        // member functions
        // NOLINTBEGIN
        MCNAPI ~FileDescription();
        // NOLINTEND

    public:
        // destructor thunk
        // NOLINTBEGIN
        MCNAPI void $dtor();
        // NOLINTEND
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 48>                                                 onCancel;
    ::ll::UntypedStorage<8, 48>                                                 onOperationComplete;
    ::ll::UntypedStorage<8, 48>                                                 onPick;
    ::ll::TypedStorage<8, 24, std::vector<FilePickerSettings::FileDescription>> mFileDescriptions;
    ::ll::TypedStorage<8, 8, ulong>                                             mDefaultFileExtensionIndex;
    ::ll::TypedStorage<4, 4, ::FilePickerSettings::PickerType>                  mPickerType;
    ::ll::TypedStorage<8, 24, std::string>                                      mDefaultFileName;
    ::ll::TypedStorage<8, 24, std::string>                                      mDefaultAlbumName;
    ::ll::TypedStorage<8, 24, std::string>                                      mFilePickerTitle;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI FilePickerSettings();

    MCNAPI void addFileDescription(std::string const&, std::string const&, bool);

    MCNAPI ::FilePickerSettings::FileDescription const& getDefaultFileDescription() const;

    MCNAPI std::string const& getDefaultFileName() const;

    MCNAPI ::FilePickerSettings::PickerType getPickerType() const;

    MCNAPI void setDefaultFileName(std::string);

    MCNAPI void setPickerTitle(std::string);

    MCNAPI void setPickerType(::FilePickerSettings::PickerType);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor();
    // NOLINTEND
};
