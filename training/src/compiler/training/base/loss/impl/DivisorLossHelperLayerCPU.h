// Copyright (C) 2022. Huawei Technologies Co., Ltd. All rights reserved.

// Permission is hereby granted, free of charge, to any person obtaining a copy of this software and associated documentation files (the "Software"),
// to deal in the Software without restriction, including without limitation the rights to use, copy, modify, merge, publish, distribute, sublicense,
// and/or sell copies of the Software, and to permit persons to whom the Software is furnished to do so, subject to the following conditions:

// The above copyright notice and this permission notice shall be included in all copies or substantial portions of the Software.

// THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE
// WARRANTIES OF MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE AUTHORS OR
// COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
// OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE SOFTWARE.

#ifndef DIVISOR_LAYER_CPU_H
#define DIVISOR_LAYER_CPU_H

#include <training/base/layers/BasicImpl.h>

namespace raul
{

class DivisorLossHelperLayer;

template<typename MM>
class DivisorLossHelperLayerCPU : public BasicImpl
{
  public:
    DivisorLossHelperLayerCPU(DivisorLossHelperLayer& layer)
        : mLayer(layer)
    {
    }

    DivisorLossHelperLayerCPU(DivisorLossHelperLayerCPU&&) = default;
    DivisorLossHelperLayerCPU(const DivisorLossHelperLayerCPU&) = delete;
    DivisorLossHelperLayerCPU& operator=(const DivisorLossHelperLayerCPU&) = delete;

    void forwardComputeImpl(NetworkMode) override;
    void backwardComputeImpl() override {}

  private:
    DivisorLossHelperLayer& mLayer;
};
} // raul namespace
#endif