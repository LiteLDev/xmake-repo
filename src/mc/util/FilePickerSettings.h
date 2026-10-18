#pragma once

#include "mc/_HeaderOutputPredefine.h"
#if defined(LL_PLAT_A) // @header-generator platform

// auto generated forward declare list
// clang-format off
namespace Core { class Path; }
// clang-format on
#else // @header-generator platform
#endif // @header-generator platform

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
#if defined(LL_PLAT_A) // @header-generator platform
        ::ll::TypedStorage<8, 24, std::string> Extension;
        ::ll::TypedStorage<8, 24, std::string> Name;
#else // @header-generator platform
        ::ll::UntypedStorage<8, 32> mUnkffd3fe;
        ::ll::UntypedStorage<8, 32> mUnkf6cbbd;
#endif // @header-generator platform
        // NOLINTEND

    public:
        // prevent constructor by default
        FileDescription& operator=(FileDescription const&);
        FileDescription(FileDescription const&);
        FileDescription();
#if defined(LL_PLAT_A) // @header-generator platform

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
#else // @header-generator platform
#endif // @header-generator platform
    };

public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::UntypedStorage<8, 48>                                                 onCancel;
    ::ll::UntypedStorage<8, 48>                                                 onOperationComplete;
    ::ll::UntypedStorage<8, 48>                                                 onPick;
    ::ll::TypedStorage<8, 24, std::vector<FilePickerSettings::FileDescription>> mFileDescriptions;
    ::ll::TypedStorage<8, 8, ulong>                                             mDefaultFileExtensionIndex;
    ::ll::TypedStorage<4, 4, ::FilePickerSettings::PickerType>                  mPickerType;
    ::ll::TypedStorage<8, 24, std::string>                                      mDefaultFileName;
    ::ll::TypedStorage<8, 24, std::string>                                      mDefaultAlbumName;
    ::ll::TypedStorage<8, 24, std::string>                                      mFilePickerTitle;
#else // @header-generator platform
    ::ll::UntypedStorage<8, 64> mUnkaf4bc9;
    ::ll::UntypedStorage<8, 64> mUnkab9782;
    ::ll::UntypedStorage<8, 64> mUnk199adf;
    ::ll::UntypedStorage<8, 24> mUnk55aff7;
    ::ll::UntypedStorage<8, 8>  mUnk77f166;
    ::ll::UntypedStorage<4, 4>  mUnk20e41c;
    ::ll::UntypedStorage<8, 32> mUnk8640b0;
    ::ll::UntypedStorage<8, 32> mUnk71f729;
    ::ll::UntypedStorage<8, 32> mUnk549cd5;
#endif // @header-generator platform
    // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform

public:
    // prevent constructor by default
    FilePickerSettings& operator=(FilePickerSettings const&);
    FilePickerSettings(FilePickerSettings const&);
    FilePickerSettings();
#endif // @header-generator platform

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI FilePickerSettings();
#else // @header-generator platform
    MCNAPI void addFileDescription(::std::string const& extension, ::std::string const& name, bool isDefaultExtension);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void addFileDescription(std::string const&, std::string const&, bool);
#else // @header-generator platform
#ifdef LL_PLAT_C
    MCNAPI void setDefaultFileName(::std::string fileName);
#endif
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::FilePickerSettings::FileDescription const& getDefaultFileDescription() const;
#else // @header-generator platform
    MCNAPI void setPickerTitle(::std::string FilePickerTitle);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI std::string const& getDefaultFileName() const;

    MCNAPI ::FilePickerSettings::PickerType getPickerType() const;

    MCNAPI void setDefaultFileName(std::string);

    MCNAPI void setPickerTitle(std::string);

    MCNAPI void setPickerType(::FilePickerSettings::PickerType);
#else // @header-generator platform
#ifdef LL_PLAT_C
    MCNAPI ~FilePickerSettings();
#endif
#endif // @header-generator platform
    // NOLINTEND

public:
#if defined(LL_PLAT_A) // @header-generator platform
    // constructor thunks
#else // @header-generator platform
    // destructor thunk
#endif // @header-generator platform
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void* $ctor();
#else // @header-generator platform
#ifdef LL_PLAT_C
    MCNAPI void $dtor();
#endif
#endif // @header-generator platform
    // NOLINTEND
};
