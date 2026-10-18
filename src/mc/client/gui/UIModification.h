#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/client/gui/UIIndexInfo.h"
#include "mc/client/gui/UIOperation.h"

// auto generated forward declare list
// clang-format off
struct PackReportInfo;
struct UICondition;
namespace Json { class Value; }
// clang-format on

class UIModification {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::Json::Value*>            mValue;
    ::ll::TypedStorage<8, 24, std::vector<UIIndexInfo>> mIndices;
    ::ll::TypedStorage<1, 1, bool>                      mIsControlsArray;
    // NOLINTEND

public:
    // prevent constructor by default
    UIModification& operator=(UIModification const&);
    UIModification(UIModification const&);
    UIModification();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI int _findIndex(::UICondition const&, ::UIOperation, ::PackReportInfo&);
    // NOLINTEND
};
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
// auto generated inclusion list
#include "mc/client/gui/UIOperation.h"

// auto generated forward declare list
// clang-format off
struct PackReportInfo;
struct UICondition;
struct UIIndexInfo;
namespace Json { class Value; }
// clang-format on

class UIModification {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::Json::Value*>                mValue;
    ::ll::TypedStorage<8, 24, ::std::vector<::UIIndexInfo>> mIndices;
    ::ll::TypedStorage<1, 1, bool>                          mIsControlsArray;
    // NOLINTEND

public:
    // prevent constructor by default
    UIModification();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI UIModification(::Json::Value& baseArray, bool isControlsArray);

    MCAPI int _findIndex(::UICondition const& condition, ::UIOperation operation, ::PackReportInfo& packReportInfo);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::Json::Value& baseArray, bool isControlsArray);
    // NOLINTEND
};
#else // @header-generator platform
class UIModification {};
#endif // @header-generator platform
#endif // @header-generator platform
