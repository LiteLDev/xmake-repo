#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/util/molang/ExpressionNode.h"
#include "mc/util/molang/ExpressionOp.h"
#include "mc/world/level/biome/components/BiomeComponentBase.h"
#include "mc/world/level/biome/components/SurfaceMaterialAttributes.h"

// auto generated forward declare list
// clang-format off
class BlockPos;
class PerlinSimplexNoise;
class RenderParams;
struct SurfaceMaterialAdjustmentEvaluated;
// clang-format on

struct SurfaceMaterialAdjustmentAttributes : public ::BiomeComponentBase {
public:
    // SurfaceMaterialAdjustmentAttributes inner types declare
    // clang-format off
    struct Element;
    // clang-format on

    // SurfaceMaterialAdjustmentAttributes inner types define
    struct Element {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<4, 4, float>                        mNoiseFreqScale;
        ::ll::TypedStorage<4, 4, float>                        mNoiseLowerBound;
        ::ll::TypedStorage<4, 4, float>                        mNoiseUpperBound;
        ::ll::TypedStorage<8, 16, ::ExpressionNode>            mHeightMin;
        ::ll::TypedStorage<8, 16, ::ExpressionNode>            mHeightMax;
        ::ll::TypedStorage<8, 56, ::SurfaceMaterialAttributes> mAdjustedMaterials;
        // NOLINTEND

    public:
        // prevent constructor by default
        Element& operator=(Element const&);
        Element(Element const&);

    public:
        // member functions
        // NOLINTBEGIN
        MCNAPI ~Element();
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
    ::ll::TypedStorage<8, 24, std::vector<SurfaceMaterialAdjustmentAttributes::Element>> mAdjustments;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~SurfaceMaterialAdjustmentAttributes();
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ::SurfaceMaterialAdjustmentEvaluated
    evaluateAdjustments(::RenderParams&, ::PerlinSimplexNoise const&, ::BlockPos const&, int, int) const;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static void parseExpressionNodeFloat(::ExpressionOp, std::string const&, ::ExpressionNode&, float);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
