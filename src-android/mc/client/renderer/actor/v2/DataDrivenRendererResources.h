#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/util/molang/ExpressionNode.h"

// auto generated forward declare list
// clang-format off
class DataDrivenRenderer_tempComponent;
// clang-format on

struct DataDrivenRendererResources {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, std::vector<ExpressionNode>>                        mSetupExpressionNodes;
    ::ll::TypedStorage<8, 24, std::vector<ExpressionNode>>                        mGlobalScaleExpressionNodes;
    ::ll::TypedStorage<8, 24, std::vector<glm::vec<3, float, (glm::qualifier)0>>> mGlobalScaleConstants;
    ::ll::TypedStorage<8, 24, std::vector<uint>>                              mConditionalControllerExpressionOffsets;
    ::ll::TypedStorage<8, 24, std::vector<ExpressionNode>>                    mConditionalControllerExpressions;
    ::ll::TypedStorage<8, 24, std::vector<DataDrivenRenderer_tempComponent*>> mTempComponents;
    // NOLINTEND

public:
    // prevent constructor by default
    DataDrivenRendererResources(DataDrivenRendererResources const&);

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI DataDrivenRendererResources();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor();
    // NOLINTEND
};
