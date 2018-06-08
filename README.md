### Rcppist  rcpp包开发案例  
 
  
# 安装Rcppist1  
#下载安装Rtools  https://cran.r-project.org/bin/windows/Rtools/  
#Rstudio中运行(若无则安装)  
#install.packages("Rcpp")  #若不存在  
library("Rcpp")    
#install.packages("devtools")  #若不存在    
library("devtools")      
install_github("laohur/Rcppist")    
  
  
# 使用Rcppist1  rcpp_zlise
X<-runif(100)*100  
X  
Y<-Rcppist::rcpp_zlise(X)  
Y  
  
#即可获得Y,即X的z分数  

# 库函数  

#以下传入数值向量,返回数值向量  
zlise  
tanh  
softmax  
l2lise  
relu  

#以下传入数值向量,返回排序坐标  
csort  

#以下传入两个数值向量,返回数值  
cosineSimilarity  