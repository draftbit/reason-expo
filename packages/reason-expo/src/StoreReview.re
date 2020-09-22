[@bs.scope "StoreReview"] [@bs.module "expo"]
external requestReview: unit => unit = "requestReview";

[@bs.scope "StoreReview"] [@bs.module "expo"]
external isSupported: unit => bool = "isSupported";

[@bs.scope "StoreReview"] [@bs.module "expo"]
external storeUrl: unit => string = "storeUrl";

[@bs.scope "StoreReview"] [@bs.module "expo"]
external hasAction: unit => bool = "hasAction";
