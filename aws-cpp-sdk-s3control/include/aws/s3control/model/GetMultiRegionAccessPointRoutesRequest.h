﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/s3control/S3Control_EXPORTS.h>
#include <aws/s3control/S3ControlRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace S3Control
{
namespace Model
{

  /**
   */
  class GetMultiRegionAccessPointRoutesRequest : public S3ControlRequest
  {
  public:
    AWS_S3CONTROL_API GetMultiRegionAccessPointRoutesRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "GetMultiRegionAccessPointRoutes"; }

    AWS_S3CONTROL_API Aws::String SerializePayload() const override;

    AWS_S3CONTROL_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;

    AWS_S3CONTROL_API inline bool ShouldComputeContentMd5() const override { return true; }

    /**
     * Helper function to collect parameters (configurable and static hardcoded) required for endpoint computation.
     */
    AWS_S3CONTROL_API EndpointParameters GetEndpointContextParams() const override;

    /**
     * <p>The Amazon Web Services account ID for the owner of the Multi-Region Access
     * Point.</p>
     */
    inline const Aws::String& GetAccountId() const{ return m_accountId; }

    /**
     * <p>The Amazon Web Services account ID for the owner of the Multi-Region Access
     * Point.</p>
     */
    inline bool AccountIdHasBeenSet() const { return m_accountIdHasBeenSet; }

    /**
     * <p>The Amazon Web Services account ID for the owner of the Multi-Region Access
     * Point.</p>
     */
    inline void SetAccountId(const Aws::String& value) { m_accountIdHasBeenSet = true; m_accountId = value; }

    /**
     * <p>The Amazon Web Services account ID for the owner of the Multi-Region Access
     * Point.</p>
     */
    inline void SetAccountId(Aws::String&& value) { m_accountIdHasBeenSet = true; m_accountId = std::move(value); }

    /**
     * <p>The Amazon Web Services account ID for the owner of the Multi-Region Access
     * Point.</p>
     */
    inline void SetAccountId(const char* value) { m_accountIdHasBeenSet = true; m_accountId.assign(value); }

    /**
     * <p>The Amazon Web Services account ID for the owner of the Multi-Region Access
     * Point.</p>
     */
    inline GetMultiRegionAccessPointRoutesRequest& WithAccountId(const Aws::String& value) { SetAccountId(value); return *this;}

    /**
     * <p>The Amazon Web Services account ID for the owner of the Multi-Region Access
     * Point.</p>
     */
    inline GetMultiRegionAccessPointRoutesRequest& WithAccountId(Aws::String&& value) { SetAccountId(std::move(value)); return *this;}

    /**
     * <p>The Amazon Web Services account ID for the owner of the Multi-Region Access
     * Point.</p>
     */
    inline GetMultiRegionAccessPointRoutesRequest& WithAccountId(const char* value) { SetAccountId(value); return *this;}


    /**
     * <p>The Multi-Region Access Point ARN.</p>
     */
    inline const Aws::String& GetMrap() const{ return m_mrap; }

    /**
     * <p>The Multi-Region Access Point ARN.</p>
     */
    inline bool MrapHasBeenSet() const { return m_mrapHasBeenSet; }

    /**
     * <p>The Multi-Region Access Point ARN.</p>
     */
    inline void SetMrap(const Aws::String& value) { m_mrapHasBeenSet = true; m_mrap = value; }

    /**
     * <p>The Multi-Region Access Point ARN.</p>
     */
    inline void SetMrap(Aws::String&& value) { m_mrapHasBeenSet = true; m_mrap = std::move(value); }

    /**
     * <p>The Multi-Region Access Point ARN.</p>
     */
    inline void SetMrap(const char* value) { m_mrapHasBeenSet = true; m_mrap.assign(value); }

    /**
     * <p>The Multi-Region Access Point ARN.</p>
     */
    inline GetMultiRegionAccessPointRoutesRequest& WithMrap(const Aws::String& value) { SetMrap(value); return *this;}

    /**
     * <p>The Multi-Region Access Point ARN.</p>
     */
    inline GetMultiRegionAccessPointRoutesRequest& WithMrap(Aws::String&& value) { SetMrap(std::move(value)); return *this;}

    /**
     * <p>The Multi-Region Access Point ARN.</p>
     */
    inline GetMultiRegionAccessPointRoutesRequest& WithMrap(const char* value) { SetMrap(value); return *this;}

  private:

    Aws::String m_accountId;
    bool m_accountIdHasBeenSet = false;

    Aws::String m_mrap;
    bool m_mrapHasBeenSet = false;
  };

} // namespace Model
} // namespace S3Control
} // namespace Aws
