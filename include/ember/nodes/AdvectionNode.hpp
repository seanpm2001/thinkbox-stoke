// Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
// SPDX-License-Identifier: Apache-2.0
#pragma once

#include <frantic/magma/nodes/magma_node_property.hpp>
#include <frantic/magma/nodes/magma_simple_operator.hpp>

namespace ember {
namespace nodes {

class AdvectionNode : public frantic::magma::nodes::magma_simple_operator<4> {
  public:
    MAGMA_REQUIRED_METHODS( AdvectionNode );
    MAGMA_PROPERTY( timeStep, float )

    AdvectionNode()
        : m_timeStep( 1.f ) {}

    virtual ~AdvectionNode() {}

    virtual void compile_as_extension_type( frantic::magma::magma_compiler_interface& compiler );
};

} // namespace nodes
} // namespace ember