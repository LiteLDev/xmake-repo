#pragma once

#include "mc/_HeaderOutputPredefine.h"

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
